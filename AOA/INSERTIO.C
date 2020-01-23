#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,k,x;
	clrscr();
	printf("enter no of element");\
	scanf("%d",&n);
	printf("enter elemnent of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=1;k<=n-1;k++)
	{
		x=a[k];
		i=k-1;
		while(i>=0&&a[i]>x)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=x;
	}
	printf("sorted array\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	getch();
}