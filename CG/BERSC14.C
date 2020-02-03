#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include "MYDDA.C"

void varal(int xc,int yc,int x,int y,int color);
void brescircle(int xc,int yc,int radius,int color);
void midcircle(int xc,int yc,int radius,int color);
void main()
{
	int gd =  DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	clrscr();
	midcircle(200,150,100,GREEN);
	brescircle(200,90,20,RED);
	myDDA(210,120,210,200,BLUE);
	myDDA(180,250,180,150,BLUE);
	getch();
}

void varal(int xc,int yc,int x,int y,int color)
{
	putpixel(xc+x,yc+y,color);
	putpixel(xc-x,yc+y,color);
	putpixel(xc+x,yc-y,color);
	putpixel(xc-x,yc-y,color);

	putpixel(xc+y,yc+x,color);
	putpixel(xc-y,yc+x,color);
	putpixel(xc+y,yc-x,color);
	putpixel(xc-y,yc-x,color);

}

void brescircle(int xc,int yc,int radius,int color)
{
	int x=0,y=radius;
	int p=3-2*radius;

	varal(xc,yc,x,y,color);

	while(x<y)
	{
		x++;
		if(p<0)
		{
			p=p+4*x+6;
		}
		else
		{
			y--;
			p=p+4*(x-y)+10;
		}
		varal(xc,yc,x,y,color);
	}
}

void midcircle(int xc,int yc,int radius,int color)
{
	int x=0;
	int y=radius;
	int p=1-radius;

	varal(xc,yc,x,y,color);

	while(x<y)
	{
		x++;
		if(p<0)
		{
			p=p+2*x+1;
		}
		else
		{
			y--;
			p=p+2*(x-y)+1;
		}
		varal(xc,yc,x,y,color);
	}
}