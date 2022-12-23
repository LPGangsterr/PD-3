#include <iostream>
using namespace std;
main(){
int modulus;
int module1;
int module2;
int module3;
int module4;
int number;
cout << "Enter a four digit number: ";
cin >> number;
module1=number%10;
number=number/10;
module2=number%10;
number=number/10;
module3=number%10;
number=number/10;
module4=number%10;
modulus=module1+module2+module3+module4;
cout << "Sum: " << modulus;
}