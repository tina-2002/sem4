#include<stdio.h>
int main(){
    int x=6;
    printf("\n variable is %d",x);
    printf("\n sizeof var is %d",sizeof(x));
    printf("\n address of var is %x",&x);
    printf("\n sizeof add of var is %d",sizeof(&x));
    char y='r';
    printf("\n variable is %c",y);
    printf("\n sizeof var is %d",sizeof(y));
    printf("\n address of var is %x",&y);
    printf("\n sizeof add of var is %d",sizeof(&y));
    short int a=3;
    printf("\n variable is %d",a);
    printf("\n sizeof var is %d",sizeof(a));
    printf("\n address of var is %x",&a);
    printf("\n sizeof add of var is %d",sizeof(&a));
    unsigned int b=9;
    printf("\n variable is %u",b);
    printf("\n sizeof var is %d",sizeof(b));
    printf("\n address of var is %x",&b);
    printf("\n sizeof add of var is %d",sizeof(&b));
    long int c=64342;
    printf("\n variable is %ld",c);
    printf("\n sizeof var is %d",sizeof(c));
    printf("\n address of var is %x",&c);
    printf("\n sizeof add of var is %d",sizeof(&c));
    float e=-32;
    printf("\n variable is %f",e);
    printf("\n sizeof var is %d",sizeof(e));
    printf("\n address of var is %x",&e);
    printf("\n sizeof add of var is %d",sizeof(&e));
    double g=644432;
    printf("\n variable is %lf",g);
    printf("\n sizeof var is %d",sizeof(g));
    printf("\n address of var is %x",&g);
    printf("\n sizeof add of var is %d",sizeof(&g));
}