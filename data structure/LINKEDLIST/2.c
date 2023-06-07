// Online C compiler to run C program online
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

int main() {
    struct node n1;
    n1.next= NULL;
    scanf("%d", &n1.data);
    printf(" data - %d", n1.data);
    return 0;
}