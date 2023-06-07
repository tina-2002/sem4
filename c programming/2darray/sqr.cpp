#include<iostream>
using namespace std;
float sqr(int a){
    return a*a;
}
int main(){
    float x,y;
    cout<<"\n enter the number: ";
    cin>>x;
    y=sqr(x);
    cout<<"\n square of the number: "<<y;
}