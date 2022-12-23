#include <iostream>
using namespace std;
main(){
int Weight;
int Days;
int timeInDays;
cout << "Enter Weight that you want to loose: ";
cin >> Weight;
Days=15;
timeInDays=Days*Weight;
cout << "It will take you " << timeInDays << " Days to loose " << Weight << "KGs";
}