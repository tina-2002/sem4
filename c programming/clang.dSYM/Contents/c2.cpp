// create class to print marksheet take input as marks in 5 subjects of a student prin total amrks and %
#include<iostream>
using namespace std;

class res{
    public:
    float m1,m2,m3,m4,m5,pr,tot; 
    float marks(){
        tot=m1+m2+m3+m4+m5;
        return tot;
    }
    float perc(){
        pr=(m1+m2+m3+m4+m5)/5;
        return pr;
    }
};

int main(){
    res stud;
    cout<<"ENTER MARKS OF 5 SUBJECTS"<<endl;
    cin>>stud.m1>>stud.m2>>stud.m3>>stud.m4>>stud.m5;
    cout<<"total marks: "<<stud.marks()<<endl;
    cout<<"percentage: "<<stud.perc()<<endl;

}