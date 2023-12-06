#include<stdio.h>
#include<stdlib.h>

#define MAX_V 100



void addEdge(int arr[MAX_V][MAX_V], int src, int des)
{
	arr[src][des] = 1;
	
	arr[des][src] = 1;
}

void printGraph(int arr[MAX_V][MAX_V], int vertices)
{
	printf("Adjacency matric :\n\n");
	
	for(int i=0; i<vertices; ++i)
	{
		for(int j=0; j<vertices; ++j)
		{
			printf("%d  ", arr[i][j]);		
		}	
		printf("\n");
	}
		
}

int main()
{
	int arr[MAX_V][MAX_V];
	int vertices ,i,j,choice,src,des;
	
	
	printf("Enter the number of vertices:");
	scanf("%d",&vertices);
	
	for(i=0; i<vertices; ++i)
	{
		for(j=0; j<vertices; ++j)
		{
			arr[MAX_V][MAX_V]=0;		
		}
	}
	
	while (choice !=3 )
	{
		
		printf("\n\t\tMAIN MENU:\n1. Add Edge\n2. Print Graph\n3. Exit\n");
		
		printf("Enter you choice : ");
		scanf("%d",&choice);
		
		
		switch(choice)
		{
			case 1 : 
			
				printf("Enter the Source vertices (starts with 0): ");
				scanf("%d", &src);
				
				printf("Enter the Destination vertices(vertices-1) : ");
				scanf("%d", &des);
				
				if(src >=0 && src < vertices && des >=0 && des >=0 &&des < vertices)
				{
					addEdge(arr,src, des);
					printf("Edge added successfully");	
				}
				else
				{
					printf("Invalid vertices\n");
				}
				
				break;
				
				
			case 2 : 
				
				printGraph(arr, vertices);
				break;
				
			case 3 : 
				
				exit(0);
				break;
				
			default : 
				 printf("Invalid choice . enter a valid choice\n");			
		}
		
	}	
	return 0 ;
}
