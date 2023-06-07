#include<iostream>
using namespace std;
int main(){
    int n,i=1,f;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<"\nfactors of given number:";
    while(i<=n){
        
        if(n%i==0){
            cout<<"\n"<<i;
        }
        i++;

    }
    return 0;

}