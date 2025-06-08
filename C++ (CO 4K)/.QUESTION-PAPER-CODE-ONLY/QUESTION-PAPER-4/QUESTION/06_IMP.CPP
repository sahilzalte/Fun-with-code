/* Write a program declare a class 'book' contanning data
members as 'title','author-name','publicaton','price'.
Accept and display the information for one object using
pointer to that object.*/

#include <iostream>
using namespace std;
class book
{
public:
    string title;
    string author_name;
    string publication;
    float price;

    void accept_data()
    {
        cout << "Enter title name :";
        cin >> title;
        cout << "Enter author name:";
        cin >> author_name;
        cout << "Enter publication name :";
        cin >> publication;
        cout << "Enter price of Book :";
        cin >> price;
    }

    void display_data()
    {
        cout << endl;
        cout << "Book Details :" << endl;
        cout << "Book title name :" << title << endl;
        cout << "Book author name :" << author_name << endl;
        cout << "Book Publication name :" << publication << endl;
        cout << "Book Price :" << price << endl;
    }
};
int main()
{
    book *ptr = new book;
    ptr->accept_data();
    ptr->display_data();
    return 0;
}