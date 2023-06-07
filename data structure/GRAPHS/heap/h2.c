#include <stdio.h>
#define N 50
#define M 50
int heap[N];
int heap2[M];
int count = 0;
int count2 = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int parent(int i) {
    return ((i - 1) / 2);
}

int leftchild(int i) {
    return (2 * i + 1);
}

int rightchild(int i) {
    return (2 * i + 2);
}

void heapifyup(int i);

void heapifydown(int i);

void insertmin(int val) {
    if (count == N) {
        printf("\n----- HEAP OVERFLOW -----\n");
        return;
    }

    heap[count] = val;
    heapifyup(count);
    count++;
}

void insertmax(int val) {
    if (count2 == M) {
        printf("\n----- HEAP OVERFLOW -----\n");
        return;
    }

    heap2[count2] = val;
    heapifyup(count2);
    count2++;
}

void heapifyup(int i) {
    while (i != 0 && heap[i] < heap[parent(i)]) {
        swap(&heap[i], &heap[parent(i)]);
        i = parent(i);
    }
}

void heapifydown(int i) {
    while (leftchild(i) < count) {
        if (rightchild(i) >= count) {
            if (heap[i] > heap[leftchild(i)]) {
                swap(&heap[i], &heap[leftchild(i)]);
            }
            return;
        }

        if (heap[leftchild(i)] < heap[rightchild(i)]) {
            if (heap[i] > heap[leftchild(i)]) {
                swap(&heap[i], &heap[leftchild(i)]);
                i = leftchild(i);
            } else {
                break;
            }
        } else {
            if (heap[i] > heap[rightchild(i)]) {
                swap(&heap[i], &heap[rightchild(i)]);
                i = rightchild(i);
            } else {
                break;
            }
        }
    }
}

void deleteMin() {
    if (count == 0) {
        printf("Heap underflow\n");
        return;
    }

    heap[0] = heap[count - 1];
    count--;
    heapifydown(0);
}

void deleteMax() {
    if (count2 == 0) {
        printf("Heap underflow\n");
        return;
    }

    heap2[0] = heap2[count2 - 1];
    count2--;
    heapifydown(0);
}

void printheap() {
    for (int i = 0; i < count; i++) {
        printf("%d\t", heap[i]);
    }
    printf("\n");
}

void printheap2() {
    for (int i = 0; i < count2; i++) {
        printf("%d\t", heap2[i]);
    }
    printf("\n");
}

void heapsort(){
    while(count>1){
        swap(&heap[0] && heap[count-1]);
        count--;
        heapifydown(0);
    }
int main() {
    int n, m;

    // MIN-HEAP
    printf("\nEnter the number of elements in the tree (for MIN-HEAP): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int d;
        printf("\nEnter the %dth element: ", i + 1);
        scanf("%d", &d);
        insertmin(d);
    }

    printf("\nMIN-HEAP Tree: ");
    printheap();

    // MAX-HEAP
    printf("\nEnter the number of elements in the tree (for MAX-HEAP): ");
    scanf("%d", &m);

    for (int j = 0; j < m; j++) {
        int e;
        printf("\nEnter the %dth element: ", j + 1);
        scanf("%d", &e);
        insertmax(e);
    }

    printf("\nMAX-HEAP Tree: ");
    printheap2();

    return 0;
}
