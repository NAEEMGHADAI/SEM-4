#include<stdio.h>
#include<conio.h>

void insertionsort(int a[],int num)
{
	int k,i,x;
	for(k=1;k<num;k++)
	{
		x=a[k];
		i=k-1;

		while(i>=0&&a[i]>x)
		{
			a[i+1]=a[i];
			i--;
		}

		a[i+1]=x;
	}
}

int main()
{
	int a[100],n,i,temp;
	clrscr();

	printf("ENTER THE NUMBER OF ELEMENTS: \n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("ENTER A[%d] = \n",i);
		scanf("%d",&a[i]);
	}

	insertionsort(a,n);

	printf("SORTED ARRAY IS:\n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] = %d\n",i,a[i]);
	}

	return 0;
}