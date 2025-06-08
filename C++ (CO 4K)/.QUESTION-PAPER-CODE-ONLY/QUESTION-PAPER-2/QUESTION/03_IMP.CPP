/*Write a C++ program to overload "+" operator so
that it will perform concatenation of two strings.*/
#include <iostream>
using namespace std;
class Hello
{
public:
    string value;
    void getdata()
    {
        getline(cin, value);
    }

    Hello operator+(Hello &obj)
    {
        Hello result;
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
    Hello h1, h2;

    cout << "Enter First String :";
    h1.getdata();
    cout << "Enter secound String :";
    h2.getdata();

    Hello result = h1 + h2;
    cout<<"Concatenation String :";
    result.display();
    return 0;
}