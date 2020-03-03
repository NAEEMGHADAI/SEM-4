#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT;
	int gm,x,xs,ys,x1,y1,x2,y2,y,xm,ym;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");

	xm=getmaxx();
	ym=getmaxy();

	x=xm/2;
	y=ym/2;

//Axes
	line(x,0,x,ym);
	line(0,y,xm,y);

//Rectangle
	x1=x+30;
	y1=y-30;
	x2=x+120;
	y2=y-30;

	line(x1,y1,x2,y2);
	line(x1,y1,x1,y1-40);
	line(x1,y1-40,x2,y1-40);
	line(x2,y1-40,x2,y2);

	xs=20;
	ys=30;
	getch();

//Shearing
	setcolor(RED);
	line(x1,y1,x1+xs,y1-ys);
	line(x1+xs,y1-ys,x2+xs,y1-ys);
	line(x2,y2,x2+xs,y1-ys);

//Reflection
	setcolor(GREEN);
	line(x-30,y1,x-120,y2);
	line(x-30,y1,x-30,y1-40);
	line(x-30,y1-40,x-120,y1-40);
	line(x-120,y1-40,x-120,y1);
	getch();
}