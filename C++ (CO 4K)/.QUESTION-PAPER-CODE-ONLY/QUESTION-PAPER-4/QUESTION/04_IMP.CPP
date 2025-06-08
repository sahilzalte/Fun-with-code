// Write a C++ program to count the number of lines in a file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inputfile("04_example.txt");
    if (!inputfile)
    {
        cout << "Error openning File";
    }
    int count_lines = 0;
    string line;
    while (getline(inputfile, line))
    {
        count_lines++;
    }
    inputfile.close();
    cout << "Number of lines in file :" << count_lines << endl;

    return 0;
}