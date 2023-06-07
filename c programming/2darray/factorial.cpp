#include<iostream>
using namespace std;

//function prototype
int fact(int);

int main(){
   
    int x,f;
    cout<<"\n enter the number: ";
    cin>>x;
    f=fact(x);
    cout<<"\n favtorial of number :"<<f;
}
int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}