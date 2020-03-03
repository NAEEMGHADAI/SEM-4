#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include"myDDA.C"

int trans(int x,int tx)
{
	return x+tx;
}

int rotate(int x,int y,int theta,int p)
{
	if(p==1)
	{
		return x*(cos(theta))-y*(sin(theta));
	}
	else
	{
		return x*(sin(theta))-y*(cos(theta));
	}
}

void main()
{

	int gd = DETECT,gm;
	int tx = 50,ty = 50;
	int r = 1;
	initgraph(&gd,&gm,"c:\\urboc3\\bgi");
	myDDA(100,100,200,100,WHITE);
	myDDA(100,100,150,66,WHITE);
	myDDA(150,66,200,100,WHITE);
	myDDA(trans(100,tx),trans(100,ty),trans(200,tx),trans(100,ty),RED);
	myDDA(trans(100,tx),trans(100,ty),trans(150,tx),trans(66,ty),RED);
	myDDA(trans(100,tx),trans(66,ty),trans(200,tx),trans(100,ty),RED);
	myDDA(trans(150,tx),trans(100,ty),trans(100,tx),trans(100,ty),RED);
	myDDA(trans(100,tx),trans(100,ty),rotate(100+tx,50+ty,r,1),rotate(100+tx,50+ty,r,1),RED);
	myDDA(100,100,rotate(100+tx,50+ty,r,1),rotate(100+tx,50+ty,r,0),GREEN);
	myDDA(100,100,rotate(100+tx,50+ty,r,1),rotate(100+tx,50+ty,r,0),GREEN);
	getch();
}

