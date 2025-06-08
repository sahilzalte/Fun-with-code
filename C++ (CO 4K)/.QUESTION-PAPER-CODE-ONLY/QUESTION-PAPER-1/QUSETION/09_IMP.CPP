/* Write a program to declare a class 'item' containing data
members as 'item_name','code','price'.Accept and display
the information for one object using pointer to that object*/

#include <iostream>
using namespace std;
class item
{
public:
    string item_name;
    int code;
    float price;

    void acceptdata()
    {
        cout << "Enter item name: ";
        cin >> item_name;
        cout << "Enter item code: ";
        cin >> code;
        cout << "Enter item price: ";
        cin >> price;
    }

    void displaydata()
    {
        cout << "Item Details:" << endl;
        cout << "1. Item Name:" << item_name << endl;
        cout << "2. Item code:" << code << endl;
        cout << "3. Item Price:" << price << endl;
    }
};

int main()
{
    item *ptr = new item;
    ptr->acceptdata();
    ptr->displaydata();
    return 0;
}