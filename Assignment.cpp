#include <iostream>
using namespace std;

int main() {
// A simple calculator using switch statement 
double num1, num2;
char operation;

 cout << "Isaac Rice Store Calculator " << std::endl;
 cout << " 💰  💰  💰"<< std :: endl;

cout<< " Enter first number" << std:: endl;
cin >> num1; 

cout<< " Enter second number" << std:: endl;
cin >> num2; 
  
  cout << " Enter your preferred operator (+,-,/,*): ";
  cin>> operation;

switch (operation){
case '+':
cout<< "answer:" << num1 + num2<< std :: endl;
break;

case '-':
cout<< "answer:" << num1 - num2<< std :: endl;
break;


case '/':
if ( num2 !=0)
cout<< "answer:" << num1 / num2<< std :: endl;
else 
cout << " Can't be divided by 0" << std :: endl;
break;

case '*':
cout<< "answer:" << num1 * num2<< std :: endl;
break;

default:
cout << "Wahala for you oo my guy" << std:: endl;

}

    return 0;
}