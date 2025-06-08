#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Base class Book
class Book
{
public:
    int bookID;
    string title;
    string author;
    float price;

public:
    // Constructor
    Book(int id = 0, string t = "", string a = "", float p = 0.0)
        : bookID(id), title(t), author(a), price(p) {}

    // Virtual function for displaying book details (Polymorphism)
    virtual void display()
    {
        cout << "Book ID: " << bookID << "\nTitle: " << title
             << "\nAuthor: " << author << "\nPrice: $" << price << endl;
    }

    int getBookID() { return bookID; }

    virtual string getType() { return "Book"; }

    // Virtual destructor
    virtual ~Book() {}
};

// Derived class IssuedBook (Inheritance)
class IssuedBook : public Book
{
public:
    string issuedTo;
    string issueDate;
    string returnDate;

public:
    // Constructor with initialization
    IssuedBook(int id, string t, string a, float p, string it, string issd, string ret)
        : Book(id, t, a, p), issuedTo(it), issueDate(issd), returnDate(ret) {}

    // Overriding display function (Polymorphism)
    void display() override
    {
        cout << "Issued Book ID: " << bookID << "\nTitle: " << title
             << "\nAuthor: " << author << "\nPrice: $" << price
             << "\nIssued To: " << issuedTo << "\nIssue Date: " << issueDate
             << "\nReturn Date: " << returnDate << endl;
    }

    string getType() override { return "IssuedBook"; }
};

// Class Library to manage books and file operations
class Library
{
public:
    Book *books[100]; // Array of pointers for storing book objects (Pointers)
    int totalBooks;

public:
    Library() : totalBooks(0) {}

    // Function to add a new book to the library
    void addBook(Book *book)
    {
        books[totalBooks] = book; // Adding book using pointer
        totalBooks++;
    }

    // Function to display all books
    void displayBooks()
    {
        for (int i = 0; i < totalBooks; ++i)
        {
            books[i]->display();
            cout << "----------------------------------" << endl;
        }
    }

    // Function to issue a book (creates IssuedBook object)
    void issueBook(int id, string issuedTo, string issueDate, string returnDate)
    {
        for (int i = 0; i < totalBooks; ++i)
        {
            if (books[i]->getBookID() == id)
            {
                // Convert Book to IssuedBook and update the array
                Book *oldBook = books[i];
                IssuedBook *issuedBook = new IssuedBook(id, oldBook->title, oldBook->author,
                                                        oldBook->price, issuedTo, issueDate, returnDate);
                books[i] = issuedBook;
                delete oldBook; // Free old book memory
                cout << "Book issued successfully.\n";
                return;
            }
        }
        cout << "Book ID not found!\n";
    }

    // Function to save all books to a file (File Operations)
    void saveToFile(string filename)
    {
        ofstream file(filename, ios::trunc); // Use trunc mode to clear the file before saving
        if (file.is_open())
        {
            for (int i = 0; i < totalBooks; ++i)
            {
                file << books[i]->getBookID() << "\n";
                file << books[i]->title << "\n";
                file << books[i]->author << "\n";
                file << books[i]->price << "\n";
                if (books[i]->getType() == "IssuedBook")
                {
                    IssuedBook *issuedBook = dynamic_cast<IssuedBook *>(books[i]);
                    file << "Issued" << "\n";
                    file << issuedBook->issuedTo << "\n";
                    file << issuedBook->issueDate << "\n";
                    file << issuedBook->returnDate << "\n";
                }
                else
                {
                    file << "Available" << "\n";
                }
            }
            file.close();
            cout << "Library saved to file successfully.\n";
        }
        else
        {
            cout << "Error opening file for saving!\n";
        }
    }

    // Function to load books from a file
    void loadFromFile(string filename)
    {
        ifstream file(filename);
        if (file.is_open())
        {
            totalBooks = 0; // Reset the library
            while (!file.eof())
            {
                int id;
                string title, author, status, issuedTo, issueDate, returnDate;
                float price;

                file >> id;
                if (file.fail())
                    break;     // Stop if invalid data is found
                file.ignore(); // Skip newline
                getline(file, title);
                getline(file, author);
                file >> price;
                if (file.fail())
                    break;     // Stop if invalid price
                file.ignore(); // Skip newline
                getline(file, status);

                if (status == "Issued")
                {
                    getline(file, issuedTo);
                    getline(file, issueDate);
                    getline(file, returnDate);
                    IssuedBook *issuedBook = new IssuedBook(id, title, author, price, issuedTo, issueDate, returnDate);
                    addBook(issuedBook);
                }
                else
                {
                    Book *book = new Book(id, title, author, price);
                    addBook(book);
                }
            }
            file.close();
            cout << "Library loaded from file successfully.\n";
        }
        else
        {
            cout << "File not found, starting with an empty library.\n";
        }
    }
};

// Main function
int main()
{
    Library library;
    int choice;

    // Load library data from file at startup
    library.loadFromFile("LIBRARY_DATA.TXT");

    do
    {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Save Library to File\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id;
            string title, author;
            float price;

            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore(); // Clear the input buffer
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            cout << "Enter Price: ";
            cin >> price;

            Book *newBook = new Book(id, title, author, price);
            library.addBook(newBook);
            cout << "Book added successfully.\n";
            break;
        }
        case 2:
            library.displayBooks();
            break;
        case 3:
        {
            int id;
            string issuedTo, issueDate, returnDate;

            cout << "Enter Book ID to issue: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Issued To: ";
            getline(cin, issuedTo);
            cout << "Enter Issue Date (DD/MM/YYYY): ";
            getline(cin, issueDate);
            cout << "Enter Return Date (DD/MM/YYYY): ";
            getline(cin, returnDate);

            library.issueBook(id, issuedTo, issueDate, returnDate);
            break;
        }
        case 4:
            library.saveToFile("library_data.txt");
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
