#include <stdio.h>
#include <conio.h>

int a[50];

int partition(int a[],int beg,int end);
void quicksort(int a[],int beg,int end);

void main()
{
	int i,n;
	printf("ENTER THE NUMBER OF ELEMENT\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("ENTER a[%d] = \n",i);
		scanf("%d",&a[i]);
	}

	if(n==1)
	{
		printf("a[%d] = %d\n",0,a[0]);
	}
	else if(n==2)
	{
	      int max = a[0];
	      int min = a[1];
	      if(a[1]>a[0])
	      {
		max=a[1];
		min=a[0];
	      }
	      printf("a[%d] = %d\na[%d] = %d\n",0,min,1,max);
	}
	else
	{

		quicksort(a,0,n-1);

		printf("SORTED ARRAY IS:\n");

		for(i=0;i<n;i++)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
	}
	getch();
}

void quicksort(int a[],int beg,int end)
{
	int loc;
	
	while(beg<end)
	{
		loc=partition(a,beg,end);
		quicksort(a,beg,loc-1);
		quicksort(a,loc+1,end);
	}

}

int partition(int a[],int beg,int end)
{
	int right,left,loc,flag,temp;
	
	left=beg;
	loc=beg;
	right=end;
	
	flag=0;
	
	while(flag!=1)
	{
	
		while((a[loc]<=a[right])&&(loc!=right))
		{
			right--;
		}
	
		if(right==loc)
		{
			flag=1;
		}
	
		else if(a[loc]>a[right])
		{
			temp=a[right];
			a[right]=a[loc];
			a[loc]=temp;
			loc=right;
		}
	
		if(flag!=1)
		{
	
			while((a[loc]>=a[left])&&(loc!=left))
			{
				left++;
			}
	
			if(left==loc)
			{
				flag=1;
			}
	
			else if(a[loc]<a[left])
			{
				temp=a[left];
				a[left]=a[loc];
				a[loc]=temp;
				loc=left;
			}
	
		}
		
	}
	return loc;
}
