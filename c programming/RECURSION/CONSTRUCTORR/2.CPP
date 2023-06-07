#include<iostream>
using namespace std;
/* Parameterised Constructor */
class Car
{
public:
string brand;
string model;
int year;

Car(string x, string y,int z)
{
brand=x;
model=y;
year=z;

};

};

int main()
{
Car obj1("BMW","X5",1999);

}