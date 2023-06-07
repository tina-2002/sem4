// 2.to design a kbc interface using switch case structure
# include <iostream>
using namespace std;

int main() {
    char ans;
    int count=0;
    cout<<"WELCOME TO KBC BY ME"<<endl;
    cout<<"WHO IS THE PRIME MINISTER OF INDIA?"<<endl;
    cout<<"your options are"<<endl;
    cout<<"a. MANMOHAN SINGH"<<endl;
    cout<<"b. NARENDRA MODI"<<endl;
    cout<<"c. RAHUL GANDHI"<<endl;
    cout<<"d. KEJRIWAL"<<endl;
    cout<<"ENTER YOUR ANSWER FOR 10,000 ruppees:"<<endl;
    cin>>ans;
    switch(ans){
        case 'a':
          cout<<"OOPSIE WRONG ANSWER!!!";
          break;
        case 'b':
          cout<<"CONGRATULATIONS YOU WIN !!!"<<endl;
          count++;
          break;
        case 'c':
          cout<<"OOPSIE WRONG ANSWER!!!";
          break;
        case 'd':
          cout<<"OOPSIE WRONG ANSWER!!!";
          break; 
    }
    cout<<"WHAT IS THE CAPITAL OF INDIA?"<<endl;
    cout<<"your options are"<<endl;
    cout<<"a. MUMBAI"<<endl;
    cout<<"b. CHENNAI"<<endl;
    cout<<"c. DELHI"<<endl;
    cout<<"d. KOLKATA"<<endl;
    cout<<"ENTER YOUR ANSWER FOR 10,000 ruppees:"<<endl;
    cin>>ans;
    switch(ans){
        case 'a':
          cout<<"OOPSIE WRONG ANSWER!!!";
          break;
        case 'b':
          cout<<"OOPSIE WRONG ANSWER!!!";
         
          break;
        case 'c':
          cout<<"CONGRATULATIONS YOU WIN!!!"<<endl;
          count++;
          break;
        case 'd':
          cout<<"OOPSIE WRONG ANSWER!!!";
          break;  
    }
    cout<<"WHAT IN THE FOLLOWING CORRESPONDS TO DECIMAL 20?"<<endl;
    cout<<"your options are"<<endl;
    cout<<"a. 10100"<<endl;
    cout<<"b. 11111"<<endl;
    cout<<"c. 10000"<<endl;
    cout<<"d. 10001"<<endl;
    cout<<"ENTER YOUR ANSWER FOR 10,000 ruppees:"<<endl;
    cin>>ans;
    switch(ans){
        case 'a':
          cout<<"CONGRATULATIONS YOU WIN!!!"<<endl;
          count++;
          break;
        case 'b':
          cout<<"OOPSIE WRONG ANSWER!!!";
         
          break;
        case 'c':
          cout<<"OOPSIE WRONG ANSWER!!!";
         
          break;
        case 'd':
          cout<<"OOPSIE WRONG ANSWER!!!";
          break;  
    }
    cout<<"\n YOUR TOTAL SCORE IS :"<<count;
    cout<<"\n YOU WON "<<count*10000<<" RUPPEES";

    return 0;
   


}