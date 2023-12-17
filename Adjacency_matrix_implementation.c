// to check indegree and outdegree of the node :

#include<stdio.h>
#include<stdlib.h>

#define MAX_V 100

int graph[MAX_V][MAX_V];
int vertices,i,j,choice,source,destination;
	


void addEdge(int source, int destination)
{
	if(source>=0 && source<vertices && destination>=0 && destination <vertices)
	{
		
		graph[source][destination]=1;
		printf("Edge added successfully..!");
	}
	else
	{
		printf("Invalid vertices..!\n");
	}
}

void deleteEdge(int source, int destination)
{
	if(source>=0 && source<vertices && destination>=0 && destination <vertices)
	{
		graph[source][destination]=0;
	}
	else
	{
		printf("Invalid vertices..!");
	}
}
void indegree(int node)
{
	int count= 0 ;
	if(node<0 || node>vertices)
	{
		printf("\nOut of Range");
	}
	else
	{
		for(int j=0;j<vertices;j++)
		{
			if(graph[j][node]!=0)
			{
				count+=1;
			}
		}
		printf("\nIndegree of the node %d is %d",node,count);
	}
}

void outdegree(int node)
{
	int count = 0;
	if(node<0 || node>vertices)
	{
		printf("\nOut of range..!");
	}
	else
	{
		for(j=0;j<vertices;j++)
		{
			if(graph[node][j]!=0)
			{
				count+=1;
			}
		}
		printf("\nOutdegree of the node %d is %d",node,count);
	}
}


void searchEdge(int source, int destination)
{
	if(source>=0 && source<vertices && destination>=0 && destination<vertices)
	{
		if(graph[source][destination]==1)
		{
			printf("\nEdge exit between %d and %d",source, destination);
		}
		else
		{
			printf("\nEdge does not exist between %d and %d", source , destination);
		}
	}
	else
	{
		printf("Invalid vertices...!");
	}
	
}

void printGraph()
{

		
	printf("Graph Matrix : \n  ");
	for(i = 0;i<vertices;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=0;i<vertices;i++)
	{printf("%d ",i);
		for(j=0;j<vertices;j++)
		{
			printf("%d ",graph[i][j]);
		}
		printf("\n");
	}
	
}





int main()
{	
	printf("Enter the number of vertices:");
	scanf("%d",&vertices);
	
	for(i=0;i<vertices;i++)
	{
		for(j = 0 ; j<vertices;j++)
		{
			graph[i][j]=0;
		}
	}
	while(choice!=8)
	{
		printf("\n\t\tMAIN MENU\n1.Add Edge\n2.Delete Edge\n3.Print Graph\n4.Indegree\n5.Out degree\n6.Search Edge\n7.Exit\n");
		
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter the source vertex: ");
				scanf("%d",&source);
				printf("\nEnter the destination vertex: ");
				scanf("%d",&destination);
				addEdge(source,destination);
				break;
			case 2:
				printf("\nEnter the source vertex: ");
				scanf("%d",&source);
				printf("\nEnter the destination vertex: ");
				scanf("%d",&destination);
				deleteEdge(source,destination);
				break;
			case 3:
				printGraph();
				break;
			case 4:	
				printf("\nEnter the vertex: ");
				scanf("%d",&source);
				indegree(source);
				break;
			case 5:
				printf("\nEnter the vertex: ");
				scanf("%d",&source);
				outdegree(source);
				break;
			case 6:
			        printf("\nEnter the source vertex: ");
         		        scanf("%d", &source);
         		       	printf("\nEnter the destination vertex: ");
        		       	scanf("%d", &destination);
          			searchEdge(source, destination);
                		break;	
			case 7:
				exit(0);
			default:
				printf("\nEnter valid input");
		}
	}
}

