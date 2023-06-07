// HEAP - INSERTION METHOD
#include <stdio.h>
#define N 50
#define M 50
int heap[N];
int heap2[M];
int count = 0;
int count2 = 0;
void swap( int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int parent(int i){
    return ( (i-1)/2 );     // it will return index
}
int leftchild(int i){
    return ( 2*i + 1 );     // it will return index
}
int rightchild(int i){
    return ( 2*i + 2 );     // it will return index
}
void insertmin(int val){
    if(count == N){
        printf("\n----- HEAP OVERFLOW -----\n");
        return;
    }
    heap[count] = val;
    heapifyup(count);
    count++;
    // int i=count;
    // count++;
    // // HEAPIFY - for MIN-HEAP
    //     while(i!=0 && heap[i]<heap[parent(i)]){ 
    //         swap(&heap[i] , &heap[parent(i)]);
    //         i = parent(i);
    //     }
}
void insertmax(int va){
    if(count2 == M){
        printf("\n----- HEAP OVERFLOW -----\n");
        return;
    }
    heap2[count2] = va;
    heapifyup(count2);
    count2++;
    // int j = count2;
    // count2++;
    // // HEAPIFY - for MAX-HEAP
    //     while(j!=0 && heap2[j]>heap2[parent(j)]){ 
    //         swap(&heap2[j] , &heap2[parent(j)]);
    //         j = parent(j);
    //     }
}
void printheap(){
    for(int i=0; i<count; i++){
        printf("%d\t", heap[i]);
    }
    printf("\n");
}
void printheap2(){
    for(int i=0; i<count2; i++){
        printf("%d\t", heap2[i]);
    }
    printf("\n");
}
void heapifyup(int i){
    while(i!=0 && heap[i]<heap[parent(i)]){
        swap(&heap[i],&heap[parent(i)]);
        i=parent(i);
    }
}
void heapifydown(int i){
    while(leftchild(i)<count){
        if(rightchild(i) >= count){
            if(heap[i]>heap[leftchild(i)]){
                swap(&heap[i],&heap[leftchild(i)]);
            }
            return;
        }
        if(heap[leftchild(i)]<heap[rightchild(i)]){
            if(heap[i]>heap[leftchild(i)]){
                swap(&heap[i],&heap[leftchild(i)]);
                i=leftchild(i);
            }
            else{
                break;
            }
        }
        else{
            if(heap[i]>heap[rightchild(i)]){
                swap(&heap[i],&heap[rightchild(i)]);
                i=rightchild(i);
            }
            else{
                break;
            }
        }
    }
}
void delete(){
    if(count==0){
        printf("heap underflow\n")
        }
        heap[0]=heap[count-1];
        count--;
        heapifydown(0);
}
int main(){
    int n,m;
    // MIN-HEAP
    printf("\n Enter no. of elements in tree (for MIN-HEAP) : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int d;
        printf("\n Enter %dst element : ", i+1);
        scanf("%d", &d);
        insertmin(d);
    }
    printf("\n MIN-HEAP Tree : ");
    printheap();
    // MAX-HEAP
    printf("\n Enter no. of elements in tree (for MAX-HEAP) : ");
    scanf("%d", &m);
    for(int j=0; j<m; j++){
        int e;
        printf("\n Enter %dst element : ", j+1);
        scanf("%d", &e);
        insertmax(e);
    }
    printf("\n MAX-HEAP Tree : ");
    printheap2();
}