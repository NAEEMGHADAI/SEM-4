#include<conio.h>
#include<graphics.h>

void myDDA(int x1,int y1,int x2,int y2,int color)
{
	int dx=x2-x1,dy=y2-y1;

	int steps;
	float x=x1,y=y1;
	if(abs(dx)>abs(dy))
	{
		steps = abs(dx);
	}
	else
	{
		steps = abs(dy);
	}
	
	float xinc = dx/(float)steps;
	float yinc = dy/(float)steps;
	putpixel(x,y,color);
	
	for(int i=0;i<steps;i++)
	{
		x = x+xinc;
		y = y+yinc;
		putpixel(x,y,color);
	}

}

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gd,"c:\\Dev-Cpp\\bgi");
	myDDA(150,150,200,150,GREEN);
	getch();
}
