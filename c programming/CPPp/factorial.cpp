#include<iostream>
using namespace std;
int main(){
    int n,i=1,f=1;
    cout<<"enter the number:"<<endl;
    cin>>n;
    while(i<=n){
        f=f*i;
        i++;
    }
  
    cout<<"the factorial is "<<f;
    return 0;
}