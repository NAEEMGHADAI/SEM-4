#include<stdio.h>
#include<conio.h>

int size,v,u,adj[10][10],i,j,cost[10][10],dist[10];

void sourcessp()
{
	int k;
	for(i=1;i<=size;i++)
	{
		dist[i]=cost[v][i];
	}
	for(k=2;k<=size;k++)
	{
		for(u=1;u<=size;u++)
		{
			for(i=1;i<=size;i++)
			{
				if(adj[i][u]==1)
				{
					if(dist[u]>dist[i]+cost[i][u])
					{
						dist[u] = dist[i]+cost[i][u];
					}
				}
			}
		}
	}

	for(i=1;i<=size;i++)
	{
		printf("THE DISTANCE FOM 1 TO %d is %d\n",i,dist[i]);
	}

}

void main()
{
	int i,j;
	clrscr();
	printf("ENTER THE SIZE \n");
	scanf("%d",&size);
	printf("ENTER THE PATH IS THERE IS A PATH ENTER 1 OR ELSE ENTER 0\n");
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			printf("ENTER THE ADJACENCY FOR I J [%d %d]\n",i,j);
			scanf("%d",&adj[i][j]);
		}
	}

	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			cost[i][j] = 100;
		}
	}
	printf("ENTER THE WEIGHT\n");

	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			if(adj[i][j]==1)
			{
				printf("FROM %d to %d\n", i, j);
				scanf("%d",&cost[i][j]);
			}
		}
	}

	printf("ENTER SOURCE\n");
	scanf("%d",&v);
	printf("ENTER THE DESTINATION");
	scanf("%d",&u);
	sourcessp();
	getch();
}
