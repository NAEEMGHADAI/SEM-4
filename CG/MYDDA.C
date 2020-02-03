#include<graphics.h>
#include<math.h>

void myDDA(int x1,int y1,int x2,int y2,int color)
{
	int dx=x2-x1;
	int dy=y2-y1;
	int i;
	float x=x1;
	float y=y1;
	float xinc,yinc;

	int steps=abs(dy);
	if(abs(dx)>abs(dy))
	{
		steps = abs(dy);
	}

	xinc = dx / (float)steps;
	yinc = dy / (float)steps;
	putpixel(x,y,color);

	for(i=0;i<steps;i++)
	{
		x += xinc;
		y += yinc;
		putpixel(x,y,color);
	}

}

/*void main()
{
	int graphDriver=DETECT,graphMode;
	initgraph(&graphDriver,&graphMode,"c:\\turboc3\\bgi");
	myDDA(150,150,200,150,GREEN);
	getch();
}*/