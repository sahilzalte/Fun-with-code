#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int pos;
    char str[80];
    fstream ofile;


    ofile.open("sample.txt", ios::in | ios::out);

    ofile << "This is a sample File";
    ofile.seekp(0, ios::beg);

    cout << "Current position of put pointer: ";
    cout << ofile.tellp() << endl;

    cout << "Enter position to move from beginning: ";
    cin >> pos;

    ofile.seekg(pos, ios::beg);

    cout << "The position of get pointer: ";
    cout << ofile.tellg() << endl;

    ofile.getline(str, 50);

    ofile.close();
    return 0;
}
