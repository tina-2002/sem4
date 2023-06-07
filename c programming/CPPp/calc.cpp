// wap using switch case structure for the following: 1. to design a calculator for arithmetic operations
# include <iostream>
using namespace std;

int main() {

  char op;
  float a,b;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  switch(op) {

    case '+':
      cout << a << " + " << b << " = " << a+b;
      break;

    case '-':
      cout << a<< " - " << b << " = " << a-b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a*b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a/b;
      break;

    default:
     
      cout << "oopsie! operator is not correct";
      break;
  }

  return 0;
}
