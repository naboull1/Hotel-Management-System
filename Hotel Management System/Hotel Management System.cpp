// Hotel Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int quantity;
    int choice;
    //Quantity variables
    int QuantityRooms = 0, QuantityPasta = 0, QuantityBurger = 0, QuantityNoodles = 0, QuantityShake = 0, QuantityChicken = 0;
    //Sold amount variables
    int SoldRooms = 0, SoldPasta = 0, SoldBurger = 0, SoldNoodles = 0,SoldShake = 0, SoldChicken = 0;
    //Total price of items
    int TotalPriceRooms = 0, TotalPricePasta = 0, TotalPriceBurger = 0, TotalPriceNoodles = 0, TotalPriceShake = 0, TotalPriceChicken = 0;

    cout << "\n\t Welcome to the start of your shift, please count available items";
    cout << "\n Rooms available: ";
    cin >> QuantityRooms;

    cout << "\n Quantity of Pasta: ";
    cin >> QuantityPasta;

    cout << "\n Quantity of Burger: ";
    cin >> QuantityBurger;

    cout << "\n Quantity of Noodles: ";
    cin >> QuantityNoodles;

    cout << "\n Quantity of Shakes: ";
    cin >> QuantityShake;

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
    m:
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
    case 2:
        cout << "\n\n Enter Pasta Quantity: ";
        cin >> quantity;
        if (QuantityPasta - SoldPasta >= quantity)
        {
            SoldPasta = SoldPasta + quantity;
            TotalPricePasta = TotalPricePasta + quantity * 12.50;
            cout << "\n\n\t\t " << quantity << "  Pasta's orders have been placed Thank you!";
            if (QuantityPasta - SoldPasta <= 2)
            {
                cout << "\n\n stock is low please order more pasta's";
            }
            else
            {
                break;
            }
        }
        else
        {
            cout << "\n\tOnly" << QuantityPasta - SoldPasta << "Pasta's are remaining";
            break;
        }
    

        case 3:
            cout << "\n\n Enter Burger Quantity: ";
            cin >> quantity;
            if (QuantityBurger - SoldBurger >= quantity)
            {
                SoldBurger = SoldBurger + quantity;
                TotalPriceBurger = TotalPriceBurger + quantity * 9.50;
                cout << "\n\n\t\t " << quantity << "  Burger orders have been placed Thank you!";
                if (QuantityBurger - SoldBurger <= 2)
                {
                    cout << "\n\n stock is low please order more Burgers";
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout << "\n\tOnly" << QuantityPasta - SoldPasta << " Burgers are remaining";
                break;
            }

        case 4:
            cout << "\n\n Enter Noodles Quantity: ";
            cin >> quantity;
            if (QuantityNoodles - SoldNoodles >= quantity)
            {
                SoldNoodles = SoldNoodles + quantity;
                TotalPriceNoodles = TotalPriceNoodles + quantity * 9.50;
                cout << "\n\n\t\t " << quantity << "  Noodles orders have been placed Thank you!";
                if (QuantityNoodles - SoldNoodles <= 2)
                {
                    cout << "\n\n stock is low please order more Noodles";
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout << "\n\tOnly" << QuantityNoodles - SoldNoodles << " Noodles are remaining";
                break;
            }

        case 5:
            cout << "\n\n Enter Shake Quantity: ";
            cin >> quantity;
            if (QuantityShake - SoldShake >= quantity)
            {
                SoldShake = SoldShake + quantity;
                TotalPriceShake = TotalPriceShake + quantity * 9.50;
                cout << "\n\n\t\t " << quantity << "  Shakes orders have been placed Thank you!";
                if (QuantityShake - SoldShake <= 2)
                {
                    cout << "\n\n stock is low please order more Shakes";
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout << "\n\tOnly" << QuantityShake - SoldShake << " Shakes are remaining";
                break;
            }

        case 6:
            cout << "\n\n Enter Chicken Roll Quantity: ";
            cin >> quantity;
            if (QuantityChicken - SoldChicken >= quantity)
            {
                SoldChicken = SoldChicken + quantity;
                TotalPriceChicken = TotalPriceChicken + quantity * 14.50;
                cout << "\n\n\t\t " << quantity << "  Chicken orders have been placed Thank you!";
                if (QuantityChicken - SoldChicken <= 2)
                {
                    cout << "\n\n stock is low please order more Chicken";
                }
                else
                {
                    break;
                }
            }
            else
            {
                cout << "\n\tOnly" << QuantityChicken - SoldChicken << " Chicken are remaining";
                break;
            }

        case 7:
            cout << "\n\t\tDetails of sales and collections ";
            cout << "\n\n Number of rooms we started with: " << QuantityRooms;
            cout << "\n\n Number of rooms we rented out: " << SoldRooms;
            cout << "\n\n Number of rooms we have available: " << QuantityRooms - SoldRooms;
            cout << "\n\n Total amount made on rooms today: " << TotalPriceRooms;

            cout << "\n\t\tDetails of sales and collections ";
            cout << "\n\n Number of Pastas we started with: " << QuantityPasta;
            cout << "\n\n Number of Pastas we rented out: " << SoldPasta;
            cout << "\n\n Number of Pastas we have available: " << QuantityPasta - SoldPasta;
            cout << "\n\n Total amount made on Pastas today: " << TotalPricePasta;

            cout << "\n\t\tDetails of sales and collections ";
            cout << "\n\n Number of Noodles we started with: " << QuantityNoodles;
            cout << "\n\n Number of Noodles we rented out: " << SoldNoodles;
            cout << "\n\n Number of Noodles we have available: " << QuantityNoodles - SoldNoodles;
            cout << "\n\n Total amount made on Noodles today: " << TotalPriceNoodles;

            cout << "\n\t\tDetails of sales and collections ";
            cout << "\n\n Number of Burger we started with: " << QuantityBurger;
            cout << "\n\n Number of Burger we rented out: " << SoldBurger;
            cout << "\n\n Number of Burger we have available: " << QuantityBurger - SoldBurger;
            cout << "\n\n Total amount made on Burger today: " << TotalPriceBurger;

            cout << "\n\t\tDetails of sales and collections ";
            cout << "\n\n Number of Shake we started with: " << QuantityShake;
            cout << "\n\n Number of Shake we rented out: " << SoldShake;
            cout << "\n\n Number of Shake we have available: " << QuantityShake - SoldShake;
            cout << "\n\n Total amount made on Shake today: " << TotalPriceShake;

            cout << "\n\t\tDetails of sales and collections ";
            cout << "\n\n Number of Chicken we started with: " << QuantityChicken;
            cout << "\n\n Number of Chicken we rented out: " << SoldChicken;
            cout << "\n\n Number of Chicken we have available: " << QuantityChicken - SoldChicken;
            cout << "\n\n Total amount made on Chicken today: " << TotalPriceChicken;

        case 8:
                exit(0);

        default:
            cout << "\n Invalid Selection \n\n Please select a number from the menu above";
            
}
goto m;

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
