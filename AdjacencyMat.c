#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int adj[MAX][MAX];
int n;
int main()
{
	int max_edges, i, j, origin, destin;
	int graph_type;
	printf("\nEnter 1 for Undirected graph\nEnter 2 for Directed graph\n");
	printf("\nEnter your choice : ");
	scanf("%d", &graph_type);
	printf("\nEnter number of vertices : ");
	scanf("%d", &n);
	if (n == 0)
		printf("Graph is not valid without any vertex.");
	else
	{
		if (graph_type == 1)
			max_edges = n * (n - 1) / 2;
		else
			max_edges = n * (n - 1);
		for (i = 1; i <= max_edges; i++)
		{
			printf("\nEnter edge [ %d ] ( -1 -1 will break the program ) : ", i);
			scanf("%d %d", &origin, &destin);
			if ((origin == -1) && (destin == -1))
				break;
			if (origin >= n || destin >= n || origin < 0 || destin < 0)
			{
				printf("\nInvalid vertex!\n");
				i--;
			}
			else
			{
				adj[origin][destin] = 1;
				if (graph_type == 1)
					adj[destin][origin] = 1;
			}
		}
		printf("\nThe adjacency matrix is : \n");
		for (i = 0; i <= n - 1; i++)
		{
			for (j = 0; j <= n - 1; j++)
				printf("%4d", adj[i][j]);
			printf("\n");
		}
	}
}