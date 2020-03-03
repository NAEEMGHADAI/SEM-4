#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void display(int x1,int y1,int x,int y);
void ellipse(int x1,int y1,int rx,int ry)
 {
   int x,y;
   float d1,d2,dx,dy;
   x=0;
   y=ry;
   d1 = pow(ry,2)-(pow(rx,2)*ry)+(0.25*pow(rx,2));
   dx = 2*pow(ry,2)*x;
   dy = 2*pow(rx,2)*y;
   do
    {
      display(x1,y1,x,y);
      if(d1<0)
       {
	 x++;
	 dx = dx+(2*(pow(ry,2)));
	 d1 = d1+dx+(pow(ry,2));
       }
      else
       {
	 x++;
	 y--;
	 dx = dx+(2*(pow(ry,2)));
	 dy = dy-(2*(pow(rx,2)));
	 d1 = d1+dx-dy+(pow(ry,2));
       }
    }
   while(dx<dy);
   do
    {
      display(x1,y1,x,y);
      if(d2>0)
       {
	 x=x;
	 y--;
	 dy = dy-(2*(pow(rx,2)));
	 d2 = d2-dy+pow(rx,2);
       }
      else
       {
	 x++;
	 y--;
	 dy = dy-(2*(pow(ry,2)));
	 dx = dx+(2*(pow(ry,2)));
	 d2 = d2+dx-dy+pow(rx,2);
       }
    }
    while(y>0);
 }
void display(int xs,int ys,int x,int y)
 {
   putpixel(xs+x,ys+y,WHITE);
   putpixel(xs-x,ys-y,WHITE);
   putpixel(xs+x,ys-y,WHITE);
   putpixel(xs-x,ys+y,WHITE);
 }
void main()
 {
   int x1,y1;
   float rx1,ry1;
   int gd = DETECT,gm;
   initgraph(&gd,&gm,"c:\\turboc3\\bgi");
   ellipse(250,200,100,50);
   getch();
 }

