#include <iostream>
using namespace std;
main(){
string Name;
int adultTicketPrice;
int childTicketPrice;
int adultTicketSold;
int childTicketSold;
int Percentage;
int Amount;
int Donation;
cout << "Enter Movie name: ";
cin >> Name;
cout << "Enter Adult Ticket Price: ";
cin >> adultTicketPrice;
cout << "Enter Child Ticket Price: ";
cin >> childTicketPrice;
cout << "Enter Number of Adult Ticket Sold: ";
cin >> adultTicketSold;
cout << "Enter Number of Child Ticket Sold: ";
cin >> childTicketSold;
cout << "Enter Percentage to Donate: ";
cin >> Percentage;
cout << "_________________________________________" <<endl;
Amount=(childTicketSold*childTicketPrice)+(adultTicketSold*adultTicketPrice);
cout << "Total Amount Generated: " << Amount << endl;
Donation=Amount-(Amount*Percentage/100);
cout << "Amount after dontion: " << Donation << endl;
}
