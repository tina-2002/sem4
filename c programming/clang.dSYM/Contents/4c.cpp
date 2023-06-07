#include <iostream>
using namespace std;
class complex
{
    float x, y;
    public:
    complex(){
    }
    complex(float real, float img)
    {   x = real;
        y = img;
    }
friend complex operator+(complex,complex);
    void display(void);
};

complex operator+(complex c,complex d)
{
    complex t;
    t.x = d.x + c.x;
    t.y = d.y + t.y;
    return(t);
};
void complex::display(void)
{
    cout << x << "+i" << y << endl;
}
int main(){
    complex c1, c2, c3;
    c1 = complex(2.5, 3.5);
    c2 = complex(1.5, 5.5);
    c3 = c1 + c2;//c3=opra+(c1,c2)
    cout << "C1:" << endl;
    c1.display();
    cout << "C2:" << endl;
    c2.display();
    cout << "C3:" << endl;
    c3.display();
}