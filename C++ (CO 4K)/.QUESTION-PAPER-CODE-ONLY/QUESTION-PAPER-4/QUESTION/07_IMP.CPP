/*Write a program that copies contents of one file into another file*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream sourcefile("07_SOURCE.TXT");
    ofstream destination_file("07_DESTINATION.TXT");
    if (!sourcefile || !destination_file)
    {
        cout << "Error opening file";
    }
    char ch;
    while (sourcefile.get(ch))
    {
        destination_file.put(ch);
    }
    sourcefile.close();
    destination_file.close();
    cout << "File contents copy Sucessfully" << endl;
    return 0;
}


