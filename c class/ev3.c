#include<stdio.h>
int main(){

int a, b, n=0;
int sum, i=1, m=b;
printf("enter your first operend: ");
scanf("%d", &a);
printf("enter your second operend: ");
scanf("%d",&b);

while(m)
m=m/10;
i*=10;

while(i!=1)
{

i=i/10;
 sum=b/i;
n=n+ (sum*a*i);
b=b%i;
}
printf("your final answer is: %d", n);
return 0;
}