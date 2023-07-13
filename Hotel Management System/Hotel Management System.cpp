// Hotel Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int quantity;
    int choice;
    //Quantity variables
    int QuantityRooms = 0, QuantityPasta = 0, QuantityBurger = 0, QuantityNoodles = 0, QuantityChicken = 0;
    //Sold amount variables
    int SoldRooms = 0, SoldPasta = 0, SoldBurger = 0, SoldNoodles = 0, SoldChicken = 0;
    //Total price of items
    int TotalPriceRooms = 0, TotalPricePasta = 0, TotalPriceBurger = 0, TotalPriceNoodles = 0, TotalPriceChicken = 0;

    cout << "\n\t Welcome to the start of your shift, please count available items";
    cout << "\n Rooms available: ";
    cin >> QuantityRooms;

    cout << "\n Quantity of Pasta: ";
    cin >> QuantityPasta;

    cout << "\n Quantity of Burger: ";
    cin >> QuantityBurger;

    cout << "\n Quantity of Noodles: ";
    cin >> QuantityNoodles;

    cout << "\n Quantity of ChickenRoll: ";
    cin >> QuantityChicken;

    cout << "Quantity amounts received and saved";
    cout << "\n\t\t\t Please select from the menu options ";
    cout << "\n\n1) Rooms";
    cout << "\n\n2) Pasta";
    cout << "\n\n3) Burger";
    cout << "\n\n4) Noodles";
    cout << "\n\n5) Shake";
    cout << "\n\n6) Chicken Roll";
    cout << "\n\n7) Sales and Collection";
    cout << "\n\n8) Exit";

    cout << "\n\n Please Enter your choice!";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the amount of rooms you would like to book: ";
        cin >> quantity;
        if (QuantityRooms - SoldRooms >= quantity)
        {
            SoldRooms = SoldRooms + quantity;
            TotalPriceRooms = TotalPriceRooms + quantity * 1000;
            cout << "\n\n\t\t" << quantity << "room/rooms have been booked!";
            cout << "\n\n You have " << QuantityRooms - SoldRooms << " left ";
        }
        else
        {
            cout << "\n\tOnly" << QuantityRooms - SoldRooms << "Rooms reamining";
            break;
        }



    default:
        break;
    }
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
