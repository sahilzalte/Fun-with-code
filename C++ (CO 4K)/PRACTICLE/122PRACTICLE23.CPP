#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class FileHandler
{
    fstream file;

public:
    // Constructor for opening the file
    FileHandler(const string &filename, ios::openmode mode)
    {
        file.open(filename, mode);
        if (!file)
        {
            cerr << "Error opening file!" << endl;
        }
    }
    // Method to write data to file
    void writeToFile(const string &data)
    {
        if (file.is_open())
        {
            file << data << endl;
        }
        else
        {
            cerr << "File not open for writing!" << endl;
        }
    }
    // Method to read data from file
    void readFromFile()
    {
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                cout << line << endl;
            }
        }
        else
        {
            cerr << "File not open for reading!" << endl;
        }
    }
    // Destructor to close the file
    ~FileHandler()
    {
        if (file.is_open())
        {
            file.close();
        }
    }
};
int main()
{
    // Write to file
    FileHandler writer("PRT_23_EXAMPLE.TXT", ios::out);
    writer.writeToFile("Hello, World!");
    writer.writeToFile("This is a test file.");
    // Read from file
    FileHandler reader("PRT_23_EXAMPLE.TXT", ios::in);
    reader.readFromFile();
    return 0;
}
