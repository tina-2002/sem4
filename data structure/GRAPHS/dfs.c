#include<stdio.h>
int adj[8][8]={0,1,1,0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,1,1,1,0};
int visited[8]={0};
void dfs(int s){
    visited[s]=1;
    printf("%d\t",s);
    for(int d=0;d<8;d++){
        if(adj[s][d]==1 && visited[d]==0){
            dfs(d);
        }
    }
}
int main()
{
    dfs(0);
    return 0;
}
