include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 3

int adjmat[MAX_VERTICES][MAX_VERTICES] = {{0, 1, 1}, {1, 0, 1}, {1, 1, 0}};
int visited[MAX_VERTICES] = {0};
int queue[MAX_VERTICES];
int front = 0, rear = 0;

void bfs(int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    queue[rear++] = vertex;

    while (front < rear) {
        int current_vertex = queue[front++];
        for (int i = 0; i < MAX_VERTICES; i++) {
            if (adjmat[current_vertex][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                printf("%d ", i);
                queue[rear++] = i;
            }
        }
    }
}

int main() {
    bfs(0);
    return 0;
}