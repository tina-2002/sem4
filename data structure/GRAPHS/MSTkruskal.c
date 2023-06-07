#include <stdio.h>
#define sz 10

int e = 10, n = 6;
int edges[sz][3] = {
    {2, 5, 1},
    {2, 3, 3},
    {1, 4, 4},
    {3, 5, 5},
    {0, 2, 6},
    {0, 3, 9},
    {1, 2, 11},
    {4, 3, 13},
    {1, 0, 16},
    {4, 0, 25}
};
int forest[sz];

void create() {
    int i;
    for (i = 0; i < n; i++) {
        forest[i] = -1;
    }
}

void print_forest() {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", forest[i]);
    }
    printf("\n");
}

int find(int i) {
    while (forest[i] >= 0) {
        i = forest[i];
    }
    return i;
}

void unionn(int i, int j) {
    forest[i] = j;
}

void kruskal() {
    int i, u, v, j, k, minwt, ec;
    create();
    i = 0;
    minwt = 0;
    ec = 0;
    while (i < n - 1 && ec < e) {
        u = edges[ec][0];
        v = edges[ec][1];
        j = find(u);
        k = find(v);
        print_forest();
        if (j != k) {
            i++;
            printf("%d\t%d\t%d\n", u, v, edges[ec][2]);
            minwt += edges[ec][2];
            unionn(j, k);
        }
        ec++;
    }
    if (i != n - 1) {
        printf("No spanning tree exists");
    } else {
        printf("Minimum weight of spanning tree: %d", minwt);
    }
}

int main() {
    kruskal();
    return 0;
}