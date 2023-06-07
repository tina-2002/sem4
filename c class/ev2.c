#include<stdio.h>
int main()
{
	int n,c=1,d;
	int a=981;
	int b=1234;
	int res=0;
    while(b!=0)
    {
    	d=b%10;
    	b=b/10;
    	res=res+a*d*c;
    	c=c*10;
    	d=d*10;
	}
	printf("result:%d",res);
}