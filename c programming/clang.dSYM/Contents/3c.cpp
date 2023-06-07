// demonstrate the usage of scope resolution operator in cpp by creating a class which will compute the temp conversion task

#include<iostream>
using namespace std;

class Temperature
{
public:
double celcius;
double farhenite;


double convceltofar()
{
return ((celcius * 9/5 ) + 32);
}
double convfartocel()
{
return ((farhenite - 32) * 5/9);
}

};
int main()
{
Temperature temp;

cout<<"Enter the °C to convert into °F";
cin>>temp.celcius;
cout<<"Enter the °F to convert into °C";
cin>>temp.farhenite;

cout<<"The conversion of °C to °F is: ";
cout<<temp.convceltofar()<<endl;
cout<<"The conversion of °F to °C is: ";
cout<<temp.convfartocel()<<endl;


}