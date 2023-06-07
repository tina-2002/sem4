//greater of 3 numvbers and pass argument
#include <iostream>
using namespace std;
int compare(float x,float y,float z){
    if(x>y&&x>z){
        return x;
    }
    else if(y>x&&y>z){
        return y;
    
    }
    else{
        return z;
    }
}
int main(){
    float a,b,c;
    float q;
    cout<<"\n enter three numbers to compare";
    cin>>a>>b>>c;
    q=compare(a,b,c);
    cout<<"\n greatest: "<<q;
    

}