#include<stdio.h>
#include<conio.h>

int a[100];

void main()
{
	int n,i,x,p;
	clrscr();

	printf("Enter the no. of elements:\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]= \n",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&x);
	p=-1;
	if(n==1)
	{
		if(x==a[0])
		{
			p = 0;
		}
	}
	else if(n==2)
	{
		if(x==a[0])
		{
			p = 0;
		}
		else if (x==a[1])
		{
			p = 1;
		}
		else
		{
			printf("Element not found\n");
		}
	}
	else
	{
		p=binsearch(a,0,n-1,x);
	}
	if(p==-1)
	{
		printf("Element not present\n");
	}
	else
	{

		printf("Element is present at %d position",p);
	}

	getch();
}

int binsearch(int a[],int low,int high,int x)
{
	int mid,p=-1;
	mid = (low+high)/2;

	if(low<=high)
	{
		if(x==a[mid])
		{
			return mid;
		}
		else if(x>a[mid])
		{
			p=binsearch(a,mid+1,high,x);
		}
		else
		{
			p=binsearch(a,0,mid-1,x);
		}
	}
	return p;
}