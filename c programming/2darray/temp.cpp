#include<iostream>
using namespace std;
float fc(float f){
    float c;
    c=(f-32.0)*5.0/9.0;
    return c;
}
float cf(float c){
    float f;
    f=(c*9.0/5.0)+32;
    return f;
}
int main(){
    float f,c;
    cout<<"\n enter temp in degree far: ";
    cin>>f;
    cout<<"\n enter temp in degree cen: ";
    cin>>c;
    cout<<"temp in celcius= "<<fc(f)<<endl;
    cout<<"temp in farhaneit= "<<cf(c)<<endl;
    return 0;
}