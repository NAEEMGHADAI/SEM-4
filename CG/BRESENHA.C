#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void bresenham(int x1,int y1,int x2,int y2,int color)
{
	int dx = abs(x1-x2);
	int dy = abs(y1-y2);

	int p = 2*dy-dx;
	int x,y,xend;


	if(x1>x2)
	{
		x= x2;
		y= y2;
		xend = x1;
	}
	else
	{
		x = x1;
		y = y1;
		xend = x2;
	}
	putpixel(x,y,color);
	while(x<xend)
	{

		if(p<0)
		{
			p= p + 2*dy;
		}
		else
		{
			y++;
			p =p+2*(dy-dx);
			putpixel(x,y,color);
		}
	}
}


void main()
{
	int gdriver = DETECT,gmode,error,x1,y1,x2,y2;

	initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

	clrscr();

	bresenham(100,100,150,150,RED);
	bresenham(150,150,300,150,GREEN);
	getch();
}



