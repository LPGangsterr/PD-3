#include <iostream>
using namespace std;
main(){
float vegetablePricePerKilogram;
float fruitPricePerKilogram;
int totalKilogramsOfVegetables;
int totalKilogramsOfFruits;
float amountInCoin;
float amountInRupees;
cout << "Enter Vegetable Price per kilogram: ";
cin >> vegetablePricePerKilogram;
cout << "Enter Fruit Price per kilogram: ";
cin >> fruitPricePerKilogram;
cout << "Enter Total kilograms of Vegetables: ";
cin >> totalKilogramsOfVegetables;
cout << "Enter Total kilograms of Fruits: ";
cin >> totalKilogramsOfFruits;
amountInCoin=(vegetablePricePerKilogram*totalKilogramsOfVegetables)+(fruitPricePerKilogram*totalKilogramsOfFruits);
amountInRupees=amountInCoin/1.94;
cout << "Your Total Cost: " << amountInRupees;
}