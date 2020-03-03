#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include "MYDDA.c"

int translate(int x,int tx)
{
 return x + tx;
}

int rotate(int x, int y, float theta, int p)
{
theta = 1*(theta*3.14/180);
if(p==1)
{
	return ceil(x*cos(theta)-y*sin(theta));
}
return ceil(x*sin(theta)+y*cos(theta));
}

void main()
{
int maxx, maxy;
int originx, originy;
float theta=-40;
int tx=41, ty=-87;
int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
maxx=getmaxx();
maxy=getmaxy();
originx=maxx/2;
originy=maxy/2;

myDDA(0, originy, maxx, originy,RED);
myDDA(originx, 0, originx, maxy,RED);

myDDA(originx+0, originy-0, originx+100, originy-100, GREEN);
myDDA(originx+0, originy-0, originx+rotate(100, 100, theta,1), originy-rotate(100, 100, theta,0), GREEN);

myDDA(originx+100, originy-100, originx+200, originy-100, RED);
myDDA(originx+100, originy-100, originx+150, originy-150, RED);
myDDA(originx+150, originy-150, originx+200, originy-100, RED);

myDDA(originx+translate(100, tx), originy-translate(100, ty),
originx+translate(200, tx), originy-translate(100, ty), BLUE);
myDDA(originx+translate(100, tx), originy-translate(100, ty),
originx+translate(150, tx), originy-translate(150, ty), BLUE);
myDDA(originx+translate(150, tx), originy-translate(150, ty),
originx+translate(200, tx), originy-translate(100, ty), BLUE);
getch();
}

 
