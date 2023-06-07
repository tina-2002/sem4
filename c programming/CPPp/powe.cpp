#include<iostream>
using namespace std;
int main(){
    int a=1,b,p,i=0;
    cout<<"enter the base "<<endl;
    cin>>b;
    cout<<"enter the power "<<endl;
    cin>>p;
    while(i<p){
        a=a*b;
        i++;

    }
    cout<< "\n result "<<a;
    return 0;
}
