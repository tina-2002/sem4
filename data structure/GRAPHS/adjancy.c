#include<stdio.h>
#define size 10
int adj[size][size];
int main()
{
    int v,e,s,d;
    printf("\nEnter the Number of Vertices: ");
    scanf("%d",&v);
    //Initialization of Graph with 0
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            adj[i][j]=0;
        }
    }
   
    printf("\nEnter Number of Edges: ");
    scanf("%d",&e);
    for(int i=0;i<e;i++){
        printf("enter %d edge's source and destination\n",i+1);
        scanf(" %d %d",&s,&d);
        adj[s][d]=1;
        adj[d][s]=1;
    }
     //Printing the Matrix
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            printf("%d\t",adj[i][j]);
        }
        printf("\n");
    }
}