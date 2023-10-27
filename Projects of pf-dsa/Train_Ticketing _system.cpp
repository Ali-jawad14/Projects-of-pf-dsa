#include <iostream>
using namespace std;

int main() {
    int task, L, K, P, Q, tickets;
    cout << "Enter 1 for Lahore\nEnter 2 for Karachi\nEnter 3 for Peshawar\nEnter 4 for Quetta\nWhich station ticket do you want from Rawalpindi: ";
    cin >> task;

    if (task == 1) {
        int executive_class = 1500, lower = 1000, economy = 800; // Rawalpindi to Lahore
        cout << "Enter 1 for Executive Class\nEnter 2 for Lower A/C\nEnter 3 for Economy\nWhich class do you prefer: ";
        cin >> L;

        if (L == 1) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Lahore\nThe " << tickets << " tickets price is " << executive_class * tickets << " and the government tax is " << executive_class * tickets * 0.15 << "\nYour total payment is " << executive_class * tickets * 1.15;
        } else if (L == 2) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Lahore\nThe " << tickets << " tickets price is " << lower * tickets << " and the government tax is " << lower * tickets * 0.15 << "\nYour total payment is " << lower * tickets * 1.15;
        } else if (L == 3) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Lahore\nThe " << tickets << " tickets price is " << economy * tickets << " and the government tax is " << economy * tickets * 0.15 << "\nYour total payment is " << economy * tickets * 1.15;
        } else {
            cout << "You provided invalid information.";
        }
    } else if (task == 2) {
        int executive_class = 11000, lower = 6000, economy = 3000, first_class = 5000, economy_sleeper = 6500; // Rawalpindi to Karachi
        cout << "Enter 1 for Executive Class\nEnter 2 for Lower A/C\nEnter 3 for Economy\nEnter 4 for First Class Sleeper\nEnter 5 for Economy Sleeper\nWhich class do you prefer: ";
        cin >> K;

        if (K == 1) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Karachi\nThe " << tickets << " tickets price is " << executive_class * tickets << " and the government tax is " << executive_class * tickets * 0.15 << "\nYour total payment is " << executive_class * tickets * 1.15;
        } else if (K == 2) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Karachi\nThe " << tickets << " tickets price is " << lower * tickets << " and the government tax is " << lower * tickets * 0.15 << "\nYour total payment is " << lower * tickets * 1.15;
        } else if (K == 3) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Karachi\nThe " << tickets << " tickets price is " << economy * tickets << " and the government tax is " << economy * tickets * 0.15 << "\nYour total payment is " << economy * tickets * 1.15;
        } else if (K == 4) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Karachi\nThe " << tickets << " tickets price is " << first_class * tickets << " and the government tax is " << first_class * tickets * 0.15 << "\nYour total payment is " << first_class * tickets * 1.15;
        } else if (K == 5) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets from Rawalpindi to Karachi\nThe " << tickets << " tickets price is " << economy_sleeper * tickets << " and the government tax is " << economy_sleeper * tickets * 0.15 << "\nYour total payment is " << economy_sleeper * tickets * 1.15;
        } else {
            cout << "You provided invalid information.";
        }
    } else if (task == 3) {
        int executive_class = 3000, lower = 1800, economy = 650; // Rawalpindi to Peshawar
        cout << "Enter 1 for Executive Class\nEnter 2 for Lower A/C\nEnter 3 for Economy\nWhich class do you prefer: ";
        cin >> P;

        if (P == 1) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets From Rawalpindi To Peshawar\nThe" << tickets << " Tickets Price is " << executive_class * tickets << " and the Government Tax is " << executive_class * tickets * 0.15 << "\nYour total payment is " << executive_class * tickets * 1.15;
        } else if (P == 2) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets From Rawalpindi To Peshawar\nThe " << tickets << " Tickets Price is " << lower * tickets << " and the Government Tax is " << lower * tickets * 0.15 << "\nYour total payment is " << lower * tickets * 1.15;
        } else if (P == 3) {
            cout << "How many seats do you want: ";
            cin >> tickets;
            cout << "You book " << tickets << " Tickets From Rawalpindi To Peshawar\nThe " << tickets << " Tickets Price is " << economy * tickets << " and the Government Tax is " << economy * tickets * 0.15 << "\nYour total payment is " << economy * tickets * 1.15;
        } else {
            cout << "You provided invalid information.";
        }
    } else if (task == 4) {
        int first_class = 12000; 
        int economy_sleeper= 4500;  //rawalpindi to quettacout
        cout<<"Enter 1 for FirstClass Sleeper\nEnter 2 for Economy Sleeper\nWhich Class you prefer : ";cin>>Q;
        if (Q == 1) 
        {cout<<"How many seats Do you want : ";
        cin>>tickets;
        
        cout<<"You book "<< tickets <<" Tickets from Rawalpindi to Quetta\nThe "<< tickets <<" tickets price is "<<first_class * tickets <<" and the goverment tax is "<<first_class * tickets * 0.15 <<"\nYour total payment is "<<first_class * tickets * 1.15;}
    }
        else if (Q == 2) 
        {
            cout<<"How many seats Do you want : ";
        cin>>tickets;
        cout<<"You book "<< tickets <<" Tickets from Rawalpindi to Quetta\nThe "<< tickets <<" tickets price is "<<economy_sleeper * tickets <<" and the goverment tax is "<<economy_sleeper * tickets * 0.15 <<"\nYour total payment is "<<economy_sleeper * tickets * 1.15;}
        else
        {
            cout<<"You provided invalid information.";
            }
        