#include<iostream>
using namespace std;
int main(){
      char op;
       double number1, number2;
   cout<<"Enter an operator  (+,-,*,/) :";
  cin>>op;
   
   cout<<"Enter number1:";
  cin>>number1;
  cout<<"Enter number2:";
  cin>>number2;
    switch(op){
        case '+':
        cout<<number1<<"+"<<number2<<" = "<<(number1+number2);
        break;
        case '-':
        cout<<number1<<"-"<<number2<<" = "<<(number1-number2);
        break;
        case '*':
        cout<<number1<<"*"<<number2<<" = "<<(number1*number2);
        break;
        case '/':
            if(number2!=0)
        cout<<number1<<"/"<<number2<<" = "<<(number1/number2); 
            else
                cout<<"can't divide by zero";
        break;
          default:
          cout<< " it  is an invalid operator";
    }
    
    return 0;
}