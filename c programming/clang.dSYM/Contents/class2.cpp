// create one class for calculation of area of circle,square,rectangle amd triamngle
#include<iostream>
using namespace std;

class ar{
    public:
     double r,s,l,h,b;
     double arofcircle()
     {
        return (2*3.14*r);
     }
     double arofsqr(){
        return (s*s);
     }
     double arofrect(){
        return (l*b);
     }
     double aroftri(){
        return ((b*h)/2);
     }
 
};
int main(){
    char s;
    ar area;
    cout<<"enter the shape";
    cin>>s;
    switch (s)
    {
        case 'c':
        {
          cout<<"enter the radius: ";
          cin>>area.r;
          cout<<"area of circle: "<<area.arofcircle();
          break;
        }
        case 's':
        {
          cout<<"enter the side: ";
          cin>>area.s;
          cout<<"area of square: "<<area.arofsqr();
          break;
        }
        case 'r':
        {
          cout<<"enter length and breadth : ";
          cin>>area.l>>area.b;
          cout<<"area of rectangle: "<<area.arofrect();
          break;
        }
        case 't':
        {
          cout<<"enter base and height: ";
          cin>>area.b>>area.h;
          cout<<"area of triangle: "<<area.aroftri();
          break;
        }
        
    }

    return 0;
}