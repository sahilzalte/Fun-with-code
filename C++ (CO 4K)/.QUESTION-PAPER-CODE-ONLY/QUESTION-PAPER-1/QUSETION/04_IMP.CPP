// Write a C++ program for write into a file using file operations.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Outfile("04_Sample.txt");
    Outfile << "Hello";
    Outfile.close();
    return 0;
}