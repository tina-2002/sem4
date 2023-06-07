#include<stdio.h>
int main()
{
	int temp,i,d;
	int a=981;
	int b=1234;
	int res=0;
    temp=b;
	for(i=0;i<4;i++)
	{
		d=temp%10;
		res=res+((a*d)*(10)^i);
		printf("%d\n",res);
		temp=temp/10;
		
	}
	printf("%d",res);
}