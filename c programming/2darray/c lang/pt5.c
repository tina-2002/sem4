#include <stdio.h>
#include <stdlib.h>

#define R 20 //max rows
#define C 20 //max columns

int main() {
    int m[R][C]; //matrix
    int a[R*C];  //array
    int r, c;    //user matrix size
    int i, j;    //iterators

    printf("insert row size: ");
    scanf("%d", &r);
    printf("insert column size: ");
    scanf("%d", &c);
    if(r > R || c > C) {
        printf("Invalid sizes");
        return -1;
    }

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("insert value for row %d column %d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
            a[(c * i) + j] = m[i][j];
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < r * c; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}