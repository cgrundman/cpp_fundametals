// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    // Input the number of small and large rooms   
    cout << "Enter the number of small rooms: ";
    int small_rooms;
    cin >> small_rooms;
    cout << "Enter the number of large rooms: ";
    int large_rooms;
    cin >> large_rooms;
    
    // Display the quote
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms:" << small_rooms << endl;
    cout << "Number of large rooms:" << large_rooms << endl;
    int small_room_price = 25;
    int large_room_price = 35;
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
    int cost = (small_room_price*small_rooms + large_room_price*large_rooms);
    cout << "Cost: $" << cost << endl;
    double tax = (.06*cost);
    cout << "Tax: $" << (tax) << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << (cost+tax) << endl;
    cout << "This estimate is valid for 30 days" << endl;
    
    cout << endl;
    return 0;
}
