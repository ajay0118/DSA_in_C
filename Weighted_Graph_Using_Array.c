#include<stdio.h>
#include<stdlib.h>

#define MAX_V 100


void addEdge(int graph[MAX_V][MAX_V], int source,int destination, int weight)
{
	graph[source][destination]= weight;
	graph[destination][source]= weight; // delte the line.. weighted directed graph
}

void printGraph(int graph[MAX_V][MAX_V],int vertices)
{
	int i,j;
	printf("Adjacency Matrix:\n\n");
	
	for (i=0; i<vertices; ++i)
	{
		for(j = 0; j<vertices; ++j)
		{
			printf("%d  ",graph[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int graph[MAX_V][MAX_V];
	int vertices,i,j,choice; 
	
	printf("Enter the number of vertices: ");
	scanf("%d", &vertices);
	
	for(i = 0 ; i<vertices; ++i)
	{
		for(j= 0; j<vertices; ++j)
		{
			graph[i][j]=0;
		}
	}
	
	while(choice!=3)
	{
		printf("\b\t\tMAIN MENU\n1. Add Edge\n2.Print Graph\n3. Exit\n");
		
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1 : 
				int source,destination,weight;
				printf("Enter the Source vertices: ");
				scanf("%d",&source);
				printf("Enter the Destination vertices: ");
				scanf("%d",&destination);
				printf("Enter the weight :");
				scanf("%d",&weight);
				addEdge(graph,source,destination,weight);
				break;
				
			case 2 :
				printGraph(graph,vertices);
				break;
				
			case 3 :
				exit(0);
				break;
			default	:
				printf("Invalid choice..");		
		}
	}
	return 0;
}



/*

Output :

	Enter the number of vertices: 3
		MAIN MENU
1. Add Edge
2.Print Graph
3. Exit
Enter your choice: 2
Adjacency Matrix:

0  0  0  
0  0  0  
0  0  0  
		MAIN MENU
1. Add Edge
2.Print Graph
3. Exit
Enter your choice: 1
Enter the Source vertices: 1
Enter the Destination vertices: 2
Enter the weight :5
		MAIN MENU
1. Add Edge
2.Print Graph
3. Exit
Enter your choice: 2
Adjacency Matrix:

0  0  0  
0  0  5  
0  5  0  
		MAIN MENU
1. Add Edge
2.Print Graph
3. Exit
Enter your choice: 1
Enter the Source vertices: 
0
Enter the Destination vertices: 1
Enter the weight :8
		MAIN MENU
1. Add Edge
2.Print Graph
3. Exit
Enter your choice: 2
Adjacency Matrix:

0  8  0  
8  0  5  
0  5  0  



*/
