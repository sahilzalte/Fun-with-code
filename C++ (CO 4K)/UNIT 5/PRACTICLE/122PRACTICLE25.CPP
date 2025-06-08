// Write file programs to implement sequential input and output operations on file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string filename = "PRT_25_DATA.TXT";
    ofstream outFile(filename, ios::out);
    if (!outFile)
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    cout << "Writing data to the file sequentially..." << endl;
    outFile << "Hello, World!" << endl;
    outFile << "This is a sequential file write operation." << endl;
    outFile << "Each line is written sequentially." << endl;
    outFile.close(); // Close the file after writing
    ifstream inFile(filename, ios::in);
    if (!inFile)
    {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << "\nReading data from the file sequentially:" << endl;
    string line;
    while (getline(inFile, line))
    {
        cout << line << endl; // Display each line read from the file
    }
    inFile.close(); // Close the file after reading
    return 0;
}
