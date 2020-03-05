#include<stdio.h>
#include<conio.h>
int n;
int path[100];
int adj[100][100],weight[100][100];


void shortpath(int s, int t)
{
	int i,dc,newdist,mindist,current;
	int dist[10],nodeset[10];
	int inf = 32767;
	int l,x;
	for(i=1;i<=n;i++)
	{
		dist[i]=inf;
		nodeset[i]=0;
	}
	current = s;
	dist[current] = 0;
	nodeset[current] = 1;
	while(current!=t)
	{
		dc = dist[current];
		for(i=1;i<=n;i++)
		{
			if((adj[current][i])&&!(nodeset[i]))
			{
				newdist = dc + weight[current][i];
				if(newdist<dist[i])
				{
					dist[i]=newdist;
					path[i]=current;
				}
			}
		}
		mindist=inf;
		for(i=1;i<=n;i++)
		{
			if(!(nodeset[i])&&(dist[i]<mindist))
			{
				mindist = dist[i];
				current = i;
			}
		}
		nodeset[current] = i;
	}
	printf("%d",dist[i]);
	l=t;
	do
	{
		x = path[l];
		printf("%d.%d",l,x);
		l = x;
	}while(l!=s);
}

int main()
{
	int i,j;
	int scr,dest;
	
	printf("Enter the number of nodes: \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			weight[i][j] = 32767;
			adj[i][j] = 0;
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("Enter the adjacency for %d to %d: ",i,j);
			scanf("%d",&adj[i][j]);
		}
	}
	
		
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(adj[i][j] == 1)
			{
			printf("Enter the weight for %d to %d: ",i,j);
			scanf("%d",&weight[i][j]);
			}
		}
	}
	
	printf("Enter the source:\t");
	scanf("%d",&scr);
	
	printf("Enter the Destination:\t");
	scanf("%d",&dest);
	
	shortpath(scr, dest);
	
	return 0;
	
}
