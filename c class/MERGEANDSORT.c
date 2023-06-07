#include<stdio.h>
int main(){
    int na,nb,c[20];
    printf("enter number of elements in first list:");
    scanf("%d",&na);
    int a[na];
    for( int i=0;i<na;i++){
        scanf("%d",&a[i]);
    }
    printf("enter number of elements in second list:");
    scanf("%d",&nb);
    int b[nb];
    for(int i=0;i<nb;i++){
        scanf("%d",&b[i]);
    }
    int pa,pb,pc,nc;
    pa=pb=pc=nc=0;
    while(pa<na&&pb<nb){
        if(a[pa]<b[pb]){
            c[pc++]=a[pa++];
        }
        else{
            c[pc++]=b[pb++];
        }
        nc++;
    }
    while(pa<na){
        c[pc++]=a[pa++];
        nc++;
    }
    while(pb<nb){
        c[pc++]=b[pb++];
        nc++;
    }
    printf("\n data after merging:");
    for(int i=0;i<nc;i++){
        printf("%d \t",&c[i]);
    }
    return 0;
}