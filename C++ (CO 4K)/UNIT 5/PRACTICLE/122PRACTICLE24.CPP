// Write programs to copy the content of one file into another file using formatted input/output functions
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string sourceFile = "PRT_24_SOURCE.TXT";
    string destinationFile = "PRT_24_DESTINATION.TXT";
    // Open source file for reading
    ifstream src(sourceFile);
    if (!src)
    {
        cerr << "Error opening source file!" << endl;
        return 1;
    }
    // Open destination file for writing
    ofstream dest(destinationFile);
    if (!dest)
    {
        cerr << "Error opening destination file!" << endl;
        return 1;
    }
    // Copy content from source to destination file line by line
    string line;
    while (getline(src, line))
    {
        dest << line << endl; // Using formatted output
    }
    cout << "File content copied successfully!" << endl;
    // Close files
    src.close();
    dest.close();
    return 0;
}
