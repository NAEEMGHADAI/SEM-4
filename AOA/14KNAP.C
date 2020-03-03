#include<stdio.h>
#include<conio.h>



void sort(float Profit[],float Weight[],int no)
{
    int i,j;
    float temp;
    for(i = 0 ; i < no ; i++)
    {
	for(j = 0 ; j < no-1-i ; j++)
	{
		if( ( Profit[j] / Weight[j] ) > ( Profit[j+1] / Weight[j+1] ) )
		{
			temp = 	Profit[j];
			Profit[j] = Profit[j+1];
			Profit[j+1] = temp;

			temp = 	Weight[j];
			Weight[j] = Weight[j+1];
			Weight[j+1] = temp;
		}
	}
    }

    for(i = 0 ; i < no ; i++)
    {
	printf("%f\n",Profit[i]);
    }


    for(i = 0 ; i < no ; i++)
    {
	printf("%f\n",Weight[i]);
    }

}

float knapsack(float Weight[],float Profit[],int cp,int no)
{
	float x[10];
	float Max = 0;
	int Capacity,i;

	for(i = 0 ; i < no ; i++)
	{
		x[i] = 0;
	}
	Capacity = cp;

	sort(Weight,Profit,no);
	i=0;
	while((i < no) && (Weight[i] <= Capacity))
	{
		x[i] = 1;
		Capacity = Capacity - Weight[i];
		i++;
	}
	if(i<no)
	{
		x[i]=Capacity/Weight[i];
	}

	for(i = 0 ; i < no ; i++)
	{
		Max = Max + x[i]*Profit[i];
	}

	return Max;
}

void main()
{
	float Profit[100];
	float Weight[100];
	float max;
	int capacity,i,no;
	printf("Enter the no. of elements\n");
	scanf("%d",&no);

	printf("Enter the Capacity\n");
	scanf("%d",&capacity);

	printf("Enter the Profit Elements\n");
	for(i=0;i<no;i++)
	{
		printf("P[%d] = ",i);
		scanf("%f",&Profit[i]);
	}

	printf("Enter the Weight Elements\n");
	for(i=0;i<no;i++)
	{
		printf("W[%d] = ",i);
		scanf("%f",&Weight[i]);
	}

	max = knapsack(Weight,Profit,capacity,no);
	printf("Value of max is %f",max);
	getch();
}



