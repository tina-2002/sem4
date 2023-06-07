#include<stdio.h>
#include<stdlib.h>
#define size 10
int adjmat[size][size];
int CountEdges(int v){
    int c=0;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(adjmat[i][j]==1){
                c+=1;
            }
        }
    }
    return c/2;
}
int CountDegree(int v, int x){
    int c=0;
    for(int i=0;i<v;i++){
        c+=adjmat[x][i];
    }
    return c;
}
int visited[50]={0};
void DFS(int v,int s){
    visited[s]=1;
    printf("%d\t", s);
    for(int d=0;d<v;d++){
        if(adjmat[s][d]==1&&visited[d]==0){
            DFS(v,d);
        }
    }
}
int main(){
    int v,e,s,d;
    printf("Enter the no. of vertices");
    scanf("%d",&v);
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            adjmat[i][j]=0;
        }
    }
    printf("Enter the no. of edges");
    scanf("%d",&e);
    for(int i=0;i<e;i++){
        printf("Enter the source of the edge");
        scanf("%d", &s);
        printf("Enter the destination of the edge");
        scanf("%d", &d);
        adjmat[s][d]=1;
        adjmat[d][s]=1;
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            printf("\t%d", adjmat[i][j]);
        }
        printf("\n");
    }
    DFS(v,0);
}