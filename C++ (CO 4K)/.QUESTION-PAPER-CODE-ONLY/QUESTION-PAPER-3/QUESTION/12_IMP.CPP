/*Write a C++ program to overload "+" operator so
that it will perform concatenation of two strings.
(Use class get data function to accept two strings)*/
#include <iostream>
using namespace std;
class hello
{
public:
    string value;

    void getdata()
    {
        getline(cin, value);
    }

    hello operator+(hello &obj)
    {
        hello result;
        result.value = value + obj.value;
        return result;
    }

    void display()
    {
        cout << value << endl;
    }
};
int main()
{
    hello str1, str2;
    cout << "Enter first string:";
    str1.getdata();
    cout << "Enter secound string :";
    str2.getdata();

    hello result = str1 + str2;
    cout << "concatenated Strings:";
    result.display();

    return 0;
}