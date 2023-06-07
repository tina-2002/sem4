// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createnode(){
    struct node *temp=NULL;
    temp =(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    printf("enter data \n");
    scanf("%d",&(temp->data));
    return temp;
}
struct node *createLL(int n){
    struct node *first, *last;
    if(n<=0){
        return NULL;
    }
    first=createnode();
    last=first;
    for(int i=1;i<n;i++){
        last->next=createnode();
        last=last->next;
    }
    return first;
}
void traverseLL(struct node *first){
    //struct node *temp;
    printf("\n linked list is : ");
    printf("\n");
    while(first){
        printf("%d \t",first->data);
        first=first->next;
    }
}
int isPrime(int num){
    if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1;
}
int primeLL(struct node *first){
    int count=0; 
    while(first){
     if(isPrime(first->data)==1)
         { count++; }
     first=first->next;   
    }
    return count;
}
int palLL(struct node *first){
    int count=0;
    while(first){
        if(pallindrome(first->data)==1)
         { count++; }
     first=first->next;
    }
    return count;
}
int evenLL(struct node *first){
    int count=0;
    while(first){
        if((first->data)%2==0){
            count++;
        }
        first=first->next;  
    }
    return count;
}
int pallindrome(int n){
    int r,sum=0,temp; 
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
        return 1;    
    else    
        return 0;   
}
int main() {
    int n;
    struct node *head;
    printf("enter no of nodes\n");
    scanf("%d",&n);
    head=createLL(n);
    traverseLL(head);
    int c=primeLL(head);
    printf("\n prime numbers in LL %d",c);
    int p=evenLL(head);
    printf("\n even numbers in LL %d",p);
    int r=palLL(head);
    printf("\n pallindomes in LL %d",r);
    return 0;
}