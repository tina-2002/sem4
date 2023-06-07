#include <iostream>

using namespace std;

class Complex
{
    public:
    float a,b,c,d,s=0,v=0;
   
    char sum()
    {
        s=a+c;
        v=b+d;
        cout<<s<<" + "<<v;
        return 'i';
    }
};
int main()
{
    Complex k;
    cout<<"Enter real and imaginary part of 1st number : ";
    cin>>k.a>>k.b;
    cout<<k.a<<" + "<<k.b<<"i"<<"\n";
    cout<<"Enter real and imaginary part of 2nd number : ";
    cin>>k.c>>k.d;
    cout<<k.c<<" + "<<k.d<<"i"<<"\n";
    cout<<"Sum of complex number is : "<<k.sum();
   
    return 0;
}
