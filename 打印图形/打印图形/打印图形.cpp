#include<stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<graphics.h>
#include<conio.h>

int inputInt(int low, int high, const char description[30]);
void Draw_diammond();
void Draw_front_lr_Triangle();
void  Draw_inverted_lr_Triangle();
void Draw_Square();
void Draw_Rectangle();
void Draw_pyramid();
void Draw_cordiform();
void Draw_Chrustmas_trees();
void Draw_Stare();
void Draw_playground();
void Draw_sky();
void main()
//void x()
{
	while (1)
	{
		int choice = 0;
		printf("1.菱形\t   2.直角等腰三角形（正立）\t3.直角等腰三角形（倒立）  4.正方形\n5.长方形   6.正立金字塔\t\t\t7.爱心\t\t\t  8.圣诞树\n9.五角星   10.操场（彩绘）\t11.天空\t\t   0.退出\n请选择要绘制的图形：");
		choice = inputInt(0, 11, "选项");
		switch (choice)
		{
		case 0:exit(0); break;
		case 1:Draw_diammond(); break;
		case 2:Draw_front_lr_Triangle(); break;
		case 3:Draw_inverted_lr_Triangle(); break;
		case 4:Draw_Square(); break;
		case 5:Draw_Rectangle(); break;
		case 6:Draw_pyramid(); break;
		case 7:Draw_cordiform(); break;
		case 8:Draw_Chrustmas_trees(); break;
		case 9:Draw_Stare(); break;
		case 10:Draw_playground(); break;
		case 11:Draw_sky(); break;
		default:break;
		}
		system("pause");
		system("cls");
	}
}


int inputInt(int low, int high, const char description[30])
{
	int temp;
	char c;
	scanf_s("%d", &temp);
	while (temp<low || temp>high)
	{
		printf("输入%s必须大于等于%d且小于等于%d\n请重新输入：", description, low, high);
		while ((c = getchar()) != '\n');
		scanf_s("%d", &temp);
	}
	return temp;
}

void Draw_diammond()
{
	int size;
	printf("请输入菱形的大小：1 3 5 7 ...:");
	size = inputInt(3, 199, "大小");
	for (int i = 0; i <= size / 2; i++)
	{
		for (int j = 0; j <= size / 2 - i; j++)printf(" ");
		for (int k = 1; k <= i * 2 + 1; k++)printf("#");
		printf("\n");
	}
	for (int i = 1; i <= size / 2; i++)
	{
		for (int j = 0; j <= i; j++)printf(" ");
		for (int k = 1; k <= size - i * 2; k++)printf("#");
		printf("\n");
	}
}

void Draw_front_lr_Triangle()
{
	int highness = 2, thickness = 1;
	do
	{
		if (highness < thickness)printf("厚度必须小于高度！\n");
		printf("请输入等腰直角三角形的高（大小限制在2-120）：");
		highness = inputInt(2, 120, "高（宽）");
		printf("请输入等腰直角三角形的厚度（大小限制在1-5）：");
		thickness = inputInt(1, 5, "厚度");
	} while (highness < thickness);
	for (int i = 1; i <= highness; i++)
	{
		int k = 1;
		if (i <= thickness) {
			while (k <= thickness)
			{
				printf("#");
				k++;
			}
		}
		else if (i + thickness <= highness)
		{
			while (k <= thickness)
			{
				printf("#");
				k++;
			}
			while (k + thickness <= i)
			{
				printf(" ");
				k++;
			}
			while (k <= i)
			{
				printf("#");
				k++;
			}
		}
		else
		{
			while (k <= i)
			{
				printf("#");
				k++;
			}
		}
		printf("\n");
	}

}

void  Draw_inverted_lr_Triangle()
{
	int highness = 2, thickness = 0;
	do
	{
		if (highness < thickness)printf("厚度必须小于高度！\n");
		printf("请输入等腰直角三角形的高度（大小限制在2-120）：");
		highness = inputInt(2, 120, "高（宽）");
		printf("请输入等腰直角三角形的厚度（大小限制在1-5）：");
		thickness = inputInt(1, 5, "厚度");
	} while (highness < thickness);
	for (int i = highness; i >= 1; i--)
	{
		int k = 1;
		if (i <= thickness) {
			while (k <= thickness)
			{
				printf("#");
				k++;
			}
		}
		else if (i + thickness <= highness)
		{
			while (k <= thickness)
			{
				printf("#");
				k++;
			}
			while (k + thickness <= i)
			{
				printf(" ");
				k++;
			}
			while (k <= i)
			{
				printf("#");
				k++;
			}
		}
		else
		{
			while (k <= i)
			{
				printf("#");
				k++;
			}
		}
		printf("\n");
	}


}

void Draw_Square()
{
	int size = 2, thickness = 1;
	do
	{
		if (size < thickness)printf("厚度必须小于边长！\n");
		printf("请输入正方形的边长（大小限制在2-120）：");
		size = inputInt(2, 120, "边长");
		printf("请输入正方形的厚度（大小限制在1-6）：");
		thickness = inputInt(1, 6, "厚度");
	} while (thickness > size);
	int i, k;
	for (i = 1; i <= size; i++)
	{
		k = 1;
		if (i <= thickness)
		{
			while (k <= size)
			{
				printf("#");
				k++;
			}
		}
		else if (i + thickness <= size)
		{
			while (k <= thickness)
			{
				printf("#");
				k++;
			}
			while (k + thickness <= size)
			{
				printf(" ");
				k++;
			}
			while (k <= size)
			{
				printf("#");
				k++;
			}
		}
		else
		{
			while (k <= size)
			{
				printf("#");
				k++;
			}
		}
		printf("\n");
	}

}

void Draw_Rectangle()
{
	int highness = 2, width = 1, thickness = 1;
	do
	{
		if (highness < thickness || width < thickness)printf("长度和宽度必须都小于厚度！\n");
		printf("请输入长方形的长度（大小限制在2-120）：");
		highness = inputInt(2, 120, "长度");
		printf("请输入长方形的宽度（大小限制在2-120））：");
		width = inputInt(2, 120, "宽度");
		printf("请输入长方形的厚度（大小限制在1-5）：");
		thickness = inputInt(1, 5, "厚度");
	} while (highness < thickness || width < thickness);
	int i, k;
	for (i = 1; i <= width; i++)
	{
		k = 1;
		if (i <= thickness)
		{
			while (k <= highness)
			{
				printf("#");
				k++;
			}
		}
		else if (i + thickness <= width)
		{
			while (k <= thickness)
			{
				printf("#");
				k++;
			}
			while (k + thickness <= highness)
			{
				printf(" ");
				k++;
			}
			while (k <= highness)
			{
				printf("#");
				k++;
			}
		}
		else
		{
			while (k <= highness)
			{
				printf("#");
				k++;
			}
		}
		printf("\n");
	}
}

void Draw_pyramid()
{
	int highness, size;
	printf("请输入金字塔的高度（大小限制在1-30）：");
	size = inputInt(1, 30, "高度");
	printf("请输入金字塔的层数（大小限制在1-100）：");
	highness = inputInt(1, 120, "层数");
	for (int i = 1; i <= size * highness; i++)
	{
		for (int j = 1; j <= size * highness + i; j++)
		{
			int outnum = (i - 1) / size + 1, innum = i % size ? i % size : size, kon = (highness - outnum) * size + size - innum;
			if ((j - kon) % (2 * size) == 1 && j < highness * size + i && j - kon>0)printf("/");
			else if ((j + kon) % (2 * size) == 0 && j > highness * size - i)printf("\\");
			else if (i % size == 0 && j > highness * size - i && j < highness * size + i)printf("_");
			else printf(" ");
		}
		printf("\n");
	}
}

void Draw_cordiform()
{
	int size;
	printf("请输入心形的大小（大小限制在4-100）：");
	size = inputInt(4, 100, "心形的大小");
	int i, j, col = (size + size % 2 + (size - 3) * 4)*2 + 3, row = (size - 2) * 2 + (col + 1) / 4;
	for (int i = 1;i<=row; i++)
	{
		int innum,kon,m_kon,cnum;			
		if (i <= size - 2)innum = i, kon = (size - 2) * 2 - 1 - (innum - 1) * 2, m_kon = (size-2) * 4 - 3 - (innum - 1) * 4, cnum = size % 2 ? size + 1 + (innum - 1) * 4:size + (innum - 1) * 4;
		else if (i <= 2 * size-4)innum = i - size-2, kon = 0, m_kon = 0,cnum=col;
		else innum = i - (2 * size-4), kon = (innum * 2) - 1, m_kon = 0, cnum = col - (innum - 1) * 4 - 2;
		if (i == 1 && size % 2 == 1)kon++, cnum = size;
		for (int j = 1; j <= col; j++)
		{
			if (j <= kon)printf(" ");
			else if (j <= kon + cnum)printf("*");
			else if (m_kon)
			{
				if (j > kon + cnum + m_kon && j <= kon + cnum * 2 + m_kon)printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
}

void Draw_Chrustmas_trees()
{
	int size = 4, highness = 3;
	//do
	{
		if (highness > size)printf("层数必须小于大小");
		printf("请输入圣诞树的大小（大小限制在4-100）：");
		size = inputInt(4, 100, "圣诞树的大小");
		printf("请输入圣诞树的层数（大小限制在3-10）：");
		highness = inputInt(3, 10, "圣诞树的层数");
	} //while (highness > size);
	int row= size * highness + size, col = (size - 1 + highness - 1) * 4 + 1;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			int outnum = (i - 1) / size + 1, innum = i % size ? i % size : size, cnum , kon;//outnum 第几层 ,innum 这层第几行, cnum = *的个数 ，Kon 左边空格
			if (outnum <= highness)cnum = (innum - 1 + outnum - 1) * 4 + 1, kon = (col - cnum) / 2;//树枝，每层size行，每层第一行从1加4，
			else cnum = ((highness / 2) + 1) * 2 + 1, kon = (col - cnum) / 2;
			if (j <= kon)printf(" ");
			else if (j <= kon + cnum)printf("*");
		}
		printf("\n");
	}
}

void Draw_Stare()
{
	int size;
	printf("请输入五角星的大小：（大小限制在4-100）");
	size = inputInt(4, 100, "大小");
	for (int i = 1; i <= size + (size*4+2)/3 +1; i++)
	{
		int l=1, r=1, kon=0,cnum=0;
		if (i <= size)kon = 3 * size - i + 1, cnum = 2 * i - 1;
		else
		{
			l = (i - size - 1) * 4 + 1;
			r = 6 * size - (i - size - 1) * 4 + 1;
			if (l >= 3 * size - i + 1)cnum = 0;
			else cnum = 1;
		}
		for (int j = 1; j <= size * 6 + 1; j++)
		{
			if (i <= size)
			{
				if (j <= kon)printf(" ");
				else if (j <= kon + cnum)printf("*");
			}
			else
			{
				if (cnum)
				{
					if (j >= l && j <= r)printf("*");
					else printf(" ");
				}
				else
				{
					if (i == size + (size * 4 + 2) / 3 + 1 && (j == 3 * size - i + 2 || j== 3 * size + i))printf("*");
					else if ((j > 3 * size - i + 1 && j <= r) || (j <= 3 * size + i && j >= l))printf("*");
					else printf(" ");
				}
			}
		}
		printf("\n");
	}
}

void Draw_playground()
{
	initgraph(640, 480);

	setbkcolor(0xFFAF31);
	cleardevice();

	setfillcolor(0xE63C0E);//跑道，深蓝
	fillcircle(200, 200, 120);
	fillcircle(450, 200, 120);
	fillroundrect(200, 80, 450, 320, 0, 0);

	for (int i = 120 - 8; i > 80; i -= 8)//跑道线
	{
		circle(200, 200, i);
		circle(450, 200, i);
		solidrectangle(200, 193 - i, 450, 207 + i);
		line(200, 200 - i, 450, 200 - i);
		line(200, 200 + i, 450, 200 + i);
	}

	setfillcolor(0xFFAF31);//操场草坪，浅蓝
	fillcircle(200, 200, 80);
	fillcircle(450, 200, 80);

	setfillcolor(0x32E03E);//浅绿
	fillroundrect(200, 120, 450, 280, 0, 0);

	setfillcolor(0x1C7D23);//深绿
	for (int i = 200; i < 450; i += 25)
		fillroundrect(i, 120, i + 12, 280, 0, 0);

	//足球场

	arc(210, 179, 252, 221, -0.85, 0.85);
	arc(397, 179, 439, 221, 2.25, 4);

	rectangle(206, 126, 443, 274);
	rectangle(206, 154, 244, 246);
	rectangle(206, 179, 219, 221);
	rectangle(405, 154, 443, 246);
	rectangle(430, 179, 443, 221);
	line(325, 126, 325, 274);
	circle(325, 200, 21);

	_getch();
	closegraph();
}

void Draw_sky() 
{
	int n, i = 0;
	printf("请输入时间（大小限制在3-180秒）:");
	n = inputInt(3, 180, "时间（秒）");
	n *= 150;
	initgraph(960, 640);
	IMAGE flower, sun, sun1, cloud, cloud1, cloud2, cloud3, cloud4, bird;
	loadimage(&flower, _T("folwer.ico"), 250, 200, true);
	loadimage(&sun, _T("太阳.png"), 100, 100, true);
	loadimage(&sun1, _T("太阳 (1).png"), 100, 100, true);
	loadimage(&cloud, _T("云朵.png"), 100, 100, true);
	loadimage(&cloud1, _T("云朵 1.png"), 100, 100, true);
	loadimage(&cloud2, _T("云朵2.png"), 100, 100, true);
	loadimage(&cloud3, _T("云朵3.png"), 100, 100, true);
	loadimage(&bird, _T("鸟.png"), 50, 50, true);
	setbkcolor(BLUE);
	cleardevice();

	IMAGE sun2;
	sun2 = sun1;
	while (n--) {
		if (n % 12 == 0)sun2 = sun1;
		if (n % 20 == 0) { cleardevice(); i += 10; }
		float H = 0;
		float S = 1;
		float L = 0.5f;
		setlinestyle(PS_SOLID, 2);		// 设置线宽为 2
		for (int r = 400; r > 330; r--)
		{
			H += 5;
			setlinecolor(HSLtoRGB(H, S, L));
			circle(959, 639, r);
		}
		rotateimage(&sun2, &sun2, 0.5, BLUE);
		putimage(0, 0, 200, 200, &sun2, 0, 0);
		putimage(150 + i % 300, 40, 100, 100, &cloud, 0, 0);
		putimage(350 + i % 300, 10, 100, 100, &cloud1, 0, 0);
		putimage(500 + i % 300, 70, 100, 100, &cloud2, 0, 0);
		putimage(700 + i % 300, 50, 100, 100, &cloud3, 0, 0);
		putimage(0 + i % 500, 200, 50, 50, &bird, 0, 0);
		putimage(80 + i % 500, 340, 50, 50, &bird, 0, 0);
		Sleep(50);
	}
	closegraph();
	_getch();
}
