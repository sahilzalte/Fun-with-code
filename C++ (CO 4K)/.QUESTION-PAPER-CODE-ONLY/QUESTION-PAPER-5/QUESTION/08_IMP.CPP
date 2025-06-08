// Write a C++ program to append data from abc txt to xyz.txt file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;

    // Open the source file (abc.txt) for reading
    ifstream inputFile("08_abc.txt");
    // Open the destination file (xyz.txt) for appending
    ofstream outputFile("08_xyz.txt", ios::app);

    // Check if the input file was opened successfully
    if (!inputFile)
    {
        cerr << "Error opening source file abc.txt!" << endl;
        return 1;
    }

    // Check if the output file was opened successfully
    if (!outputFile)
    {
        cerr << "Error opening destination file xyz.txt!" << endl;
        return 1;
    }

    // Read data from abc.txt and append it to xyz.txt
    while (getline(inputFile, line))
    {
        outputFile << line << endl; // Append each line to xyz.txt
    }

    cout << "Data from abc.txt has been appended to xyz.txt successfully!" << endl;

    // Close both files
    inputFile.close();
    outputFile.close();

    return 0;
}
