#include<stdio.h>
#define size 5
int q[size];
int f=-1;
int r=-1;
void enqueue(int x){
    if(r==size-1){
        printf("queue is full");
        return;
    }
    q[++r]=x;
    if(f==-1){
        f=0;
    }
}
void dequeue(){
    if(f==-1){
        printf("q is empty");
        return -1;
    }
    int x=q[f];
    if(f==r){
        f=-1;
        r=-1;
    }
    else{
        f=f+1;
    }
    return x;
}
void traverse(){
    if(f==-1){
        printf("q is empty");
        return;
    }
    for(int i=f;i<=r;i++){
        printf("%d\t",q[i]);
    }
}
int main(){
    enqueue(5);
    enqueue(7);
    enqueue(2);
    traverse();
    dequeue();
    enqueue(3);
    enqueue(1);
    traverse();
    dequeue();
}