// Online C compiler to run C program online
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

int main() {
    struct node a[3],b[3];
    printf("\narray1");
    for(int i=0;i<3;i++){
        a[i].next=NULL;
    }
    for(int i=0;i<3;i++){
       scanf("%d", &a[i].data);
       printf("data %d - %d", i+1,a[i].data);   
    }
    printf("\narray2");
    for(int i=0;i<3;i++){
        (*(b+i)).next=NULL;
    }
    for(int i=0;i<3;i++){
       scanf("%d", &(*(b+i)).data);
       printf("data %d - %d", i+1,(*(b+i)).data);   
    }
    
}