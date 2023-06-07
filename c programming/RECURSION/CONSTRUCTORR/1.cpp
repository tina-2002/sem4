#include<iostream>
using namespace std;
int count=0;
class mycl{
    public: //access specifier
  
     mycl(){ // constructor
        cout<<"\n hello";
        count++;  
     }
     void display(){
        int n=98;
        cout<<"\n number is "<<n;
     
     }
     
};
int main(){
    mycl m1,m2,m3;// this will call constructor automatically
    cout<<"\n count is"<<count;   
    m3.display();
    return 0;
  
}