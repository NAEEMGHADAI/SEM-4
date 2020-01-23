#include<stdio.h>
#include<conio.h>

void selectionSort(int a[],int n);

void main()
{
	int n,i;
	int a[100];
	clrscr();

	printf("ENTER THE NUMBER OF ELELMENTS: \n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("ENTER A[%d] = \n",i);
		scanf("%d",&a[i]);
	}

	selectionSort(a,n);

	for(i=0;i<n;i++)
	{
		printf("A[%d] = %d\n",i,a[i]);
	}

	getch();
}

void selectionSort(int a[],int n)
{
	int i,j,max,pos;
	for(j=n-1;j>=1;j--)
	{
		max=a[0];
		pos = 0;
		for(i=0;i<=j;i++)
		{
			if(a[i]>max)
			{
				max = a[i];
				pos = i;
			}
		}

		a[pos]=a[j];
		a[j]=max;
	}
}
