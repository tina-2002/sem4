// classes n objects
#include<iostream>
using namespace std;

class room{
    public:
      double l,b,h;
      double calcArea(){
        return l*b;
      }
      double vol(){
        return l*b*h;
      }
};
int main(){
    room room1;
    room1.l=43.5;
    room1.b=8;
    room1.h=7.3;

    cout<<"area ="<<room1.calcArea()<<endl;
    cout<<"volume ="<<room1.vol()<<endl;
    return 0;
}