#include<stdio.h>
#include<conio.h>
#include<string.h>

char test[25],pattern[25];

int brute(int n,int m)
{
	int i,j;
	
	for(i=0;i<=n-m;i++)
	{
		j=0;
		while(j<m&&test[i+j]==pattern[j])
		{
			j=j+1;
		}
		if(j==m)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int count;
	
	printf("\nTest String: ");
	scanf("%s",test);
	
	printf("\nPattern String: ");
	scanf("%s",pattern);
	
	int n = strlen(test);
	int m = strlen(pattern);
	
	count = brute(n,m);
	
	if(count == -1)
	{
		printf("\nNO Substring");
	}
	else
	{
		printf("\nSubstring exist fro m position %d to %d to test string",count,count+m-1);
	}
	return -1;
}
