#include<iostream>
using namespace std;
#define PI 3.14
float cir(float r){
    float ar,per;
    ar= PI*r*r;
    per=2*PI*r;
    cout<<"\n area of cirle: "<<ar;
    cout<<"\n perimeter of circle: "<<per;
    return 0;
}
int main(){
    float r;
    cout<<"\n enter radius: ";
    cin>>r;
    cir(r);
}