// Write a C++ program to count number of spaces in text file.
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inputFile("07_text.txt");
    if (!inputFile)
    {
        cout<<"Error in openning file !"<<endl;
        return 1;
    }
    char ch;
    int spaceCount=0;
    while (inputFile.get(ch))
    {
        if (ch==' ')
        {
            spaceCount++;
        }
        
    }
    cout<<"Number of Space count :"<<spaceCount<<endl;
    
    return 0;
}