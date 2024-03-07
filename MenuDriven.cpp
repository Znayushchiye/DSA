#include <iostream>
using namespace std;
int main()
{
    cout << "################################################################" << endl;
    cout << "Welcome to Aaru's Kitchen!" << endl;
    cout << "Are you hungry!?" << endl;
    cout << "Do you want to order? (y/n)" << endl;
    char choice;
    cin >> choice;
    int bill = 0;
    while (choice == 'y' || choice == 'Y')
    {
        cout << "\n\nPlease choose your options!" << endl;
        cout << "1. Pizza" << endl;
        cout << "2. Burger" << endl;
        cout << "3. Sandwich" << endl;
        cout << "4. Coffee" << endl;
        cout << "5. Tea" << endl;
        cout << "6. Icecream" << endl;

        int option, count;
        cin >> option;

        cout << "\n\n";
        switch (option)
        {
        case 1:
            cout << "How many Pizzas?" << endl;
            cin >> count;
            bill += count * 60;
            break;
        case 2:
            cout << "How many Burgers?" << endl;
            cin >> count;
            bill += count * 50;
            break;
        case 3:
            cout << "How many Sandwiches?" << endl;
            cin >> count;
            bill += count * 30;
            break;
        case 4:
            cout << "How many Coffee cups?" << endl;
            cin >> count;
            bill += count * 20;
            break;
        case 5:
            cout << "How many Tea cups?" << endl;
            cin >> count;
            bill += count * 12;
            break;
        case 6:
            cout << "How many Icecreams?" << endl;
            cin >> count;
            bill += count * 25;
            break;

        default:
            cout << "Wrong option entered!!" << endl;
            break;
        }
        cout << "\nDo you want to order more?(y/n)" << endl;
        cin >> choice;
    }
    cout << "\n\nBill: " << bill << endl;
    cout << "Please come again!" << endl;
    cout << "################################################################" << endl;
    return 0;
}