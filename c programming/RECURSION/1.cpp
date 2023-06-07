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
    if(a>1){
        return a*fact(a-1);
    }
    else{
        return 1;
    }
}