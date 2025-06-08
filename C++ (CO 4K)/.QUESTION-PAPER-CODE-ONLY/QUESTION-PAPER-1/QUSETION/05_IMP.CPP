// Write a C++ program to copy data from one file to another
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputfile("05_source.txt");
    ofstream outputfile("05_destination.txt");
    if (!inputfile)
    {
        cout << "Error openning source file";
    }
    if (!outputfile)
    {
        cout << "Error openning destination file";
    }
    char ch;
    while (inputfile.get(ch))
    {
        outputfile.put(ch);
    }

    inputfile.close();
    outputfile.close();

    cout << "File copy Successfully";
    return 0;
}