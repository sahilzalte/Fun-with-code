// Write programs to perform input / output operations on binary files
#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    char name[50];
    int age;
    char grade;
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter grade: ";
        cin >> grade;
    }
    void displayData() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main()
{
    Student student;
    cout << "Enter student details:" << endl;
    student.getData();
    ofstream outFile("PRT_26_STUDENT.DAT", ios::binary);
    if (!outFile)
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile.write(reinterpret_cast<char *>(&student), sizeof(student));
    outFile.close();
    cout << "\nData written to binary file successfully." << endl;
    Student readStudent;
    ifstream inFile("PRT_26_STUDENT.DAT", ios::binary);
    if (!inFile)
    {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    inFile.read(reinterpret_cast<char *>(&readStudent), sizeof(readStudent));
    inFile.close();
    cout << "\nData read from binary file:" << endl;
    readStudent.displayData();
    return 0;
}
