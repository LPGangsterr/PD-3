#include <iostream>
using namespace std;
main(){
int Acceleration;
int initialVelocity;
int finalVelocity;
int Time;
cout << "Enter Acceleration: ";
cin >> Acceleration;
cout << "Enter Initial Velocity: ";
cin >> initialVelocity;
cout << "Enter Time: ";
cin >> Time;
finalVelocity=(Acceleration*Time)+initialVelocity;
cout << "Final Velocity: " << finalVelocity;
}