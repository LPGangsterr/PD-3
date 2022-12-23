#include <iostream>
using namespace std;
main(){
int number1,number2,Sum;
int Position1,Position2,Position3,Position4;
cout << "Enter a two digit number: ";
cin >> number1;
cout << "Enter a two digit number: ";
cin >> number2;
Position1=number1%10;
number1=number1/10;
Position2=number1%10;
number1=number1/10;
Position3=number2%10;
number2=number2/10;
Position4=number2%10;
Sum=(Position1+Position3)+(Position2*Position4);
cout << "Sum: " << Sum;
}