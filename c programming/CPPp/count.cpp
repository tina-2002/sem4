//to count number of digits in any number entered by number and also sum of digits
#include<iostream>
using namespace std;
int main(){
    int n,i=1,count=0,sum=0,j;
    cout<<"enter the number:"<<endl;
    cin>>n;
    while(i<=n){
        if(n%10!=0){
            
            count++;
            j=n%10;
            sum=sum+j;
            n=n/10;
        }
    }
    cout<<count<<endl;
    cout<<sum;
    return 0;
}