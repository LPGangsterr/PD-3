#include <iostream>
using namespace std;
main(){
int Size;
int Cost;
int areaInSquareFeet;
int fertilizerPerPound;
int fertilizingAreaPerSquareFeet;
cout << "Enter Bag Size in Pounds: ";
cin >> Size;
cout << "Enter cost of the bag: ";
cin >> Cost;
cout << "Enter area covered by each bag in square feet: ";
cin >> areaInSquareFeet;
cout<< "_______________________________________________________________" << endl;
fertilizerPerPound=Cost/Size;
fertilizingAreaPerSquareFeet=Cost/areaInSquareFeet;
cout << "Cost of the fertilizer per pound; " << fertilizerPerPound << endl;
cout << "Cost of fertilizing the area per square feet: " << fertilizingAreaPerSquarebFeet;  
}