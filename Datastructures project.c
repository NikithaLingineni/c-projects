#include<stdio.h>
#include<stdlib.h>
int n,i,j;
void printGraph(int adj[n][n])
{
	for( i=0;i<n;i++)
	{
		for( j =0;j<n;j++)
		{
			printf(" %d  ",adj[i][j]);
		}
		printf("\n");
	}
}
void bfs(int adj[n][n], int start)
{
	int visited[n],queue[n],front=-1,rear=-1;
	for( i=0;i<n;i++)
		visited[i] =0;
	front++;
	queue[++rear] = start;
	visited[start] = 1;
	while(front<=rear)
	{
		start = queue[front];
		front++;
		printf("%d\t",start);
		for( i=0;i<n;i++)
		{
			if(adj[start][i]==1 && visited[i] != 1)
			{
				queue[++rear] = i;
				visited[i] =1;
			}
		}
	}
}
int main()
{	
	int s,d,ch,start;
	printf("\nEnter the number of vertices : ");
	scanf("%d",&n);
	int adj[n][n],visited[n];
	for( i =0;i<n;i++)
	{
		for( j=0;j<n;j++)
		{
			adj[i][j] =0;
		}
	}
	while(s!=-1 && d!=-1)
	{
	    printf("Enter an Edge fromnode(0 to %d) to node(0 to %d) : ",n-1,n-1);
	    scanf("%d%d",&s,&d);
	    adj[s][d] = 1;
	    adj[d][s] = 1;
	}
	do
	{
		printf("\nEnter 1 for BFS\nEnter 2 for printing adjacency matrix\nEnter 3 to Exit : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the Vertex from which do you wanted to start : ");
				scanf("%d",&start);
				bfs(adj,start);break;
			case 2:printGraph(adj);break;
			case 3:exit(0);
			default:printf("wrong choice");
		}
	}while(ch!=3);
	return 0;
}
