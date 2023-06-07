// Prim's Algorithm
#include<stdio.h>
#define V 5
#define E 16
//                   0 1 2 3 4
int adjmat[V][V] = { 0,1,0,3,5,
                     1,0,3,0,2,
                     0,3,3,6,1,
                     3,0,6,0,5,
                     5,2,1,5,0 };
int visited[V] = {0};
int Edges[3][E];
int count = 0;
int edgecount = 0;
int wtmst = 0;
#define max 999;
void Prims(int s){
    visited[s] = 1;  // to check wheather there is a cycle or not
    for(int d=0; d<V; d++){
        if(adjmat[s][d]!=0  && visited[d]==0){
            Edges[0][count] = s;
            Edges[1][count] = d;
            Edges[2][count] = adjmat[s][d];
            count++;
        }
    }
    while(edgecount < V-1){
        int min = 0;
        for(int i=1; i<count; i++){
            if(Edges[2][min] > Edges[2][i]){
                min = i;
            }
        }
        if(visited[Edges[1][min]] == 0){
            visited[Edges[1][min]] = 1;
            wtmst = wtmst + Edges[2][min];
            printf("\n source:%d  destination:%d of Weight : %d", Edges[0][min], Edges[1][min], Edges[2][min]);
            Edges[2][min] = max;
            edgecount++;
            int sc = Edges[1][min];
            for(int d=0; d<V; d++){
                if(adjmat[sc][d]!=0  && visited[d]==0){
                    Edges[0][count] = sc;
                    Edges[1][count] = d;
                    Edges[2][count] = adjmat[sc][d];
                    count++;
                }
            }
        }
    }
}
int main(){
    Prims(0);
}