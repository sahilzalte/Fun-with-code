/* Write a C++ program to declare a class Book containing data members
book_name, author_name, and price. Accept this information for one
object of the class using a pointer to that object.*/

#include <iostream>
#include <string>
using namespace std;

class Book
{
    string book_name;
    string author_name;
    float price;

public:
    // Function to input book details
    void input()
    {
        cout << "Enter book name: ";
        getline(cin, book_name);
        cout << "Enter author name: ";
        getline(cin, author_name);
        cout << "Enter price: ";
        cin >> price;
    }

    // Function to display book details
    void display()
    {
        cout << "\nBook Details:" << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Author Name: " << author_name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // Create a pointer to a Book object
    Book *ptr = new Book;

    // Input details using pointer
    cout << "Enter the details of the book:" << endl;
    ptr->input();

    // Display the details using pointer
    ptr->display();

    // Deallocate the memory
    delete ptr;

    return 0;
}
