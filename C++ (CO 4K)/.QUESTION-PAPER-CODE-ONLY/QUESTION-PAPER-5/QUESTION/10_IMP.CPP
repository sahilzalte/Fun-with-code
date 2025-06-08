/*				class    :collage student
                data mem :collage_code,stud_id;
                    |			 |
                    |			 |
                    |		 	 |
                    |			 |
                class:tets			class : sports
                data mem:percenatge 		data mem:greade
                    |			|
                    |			|
                    |			|
                     -----> class result<----*/

#include <iostream>
using namespace std;
class CollegeStudent
{
public:
    int student_id;
    int college_code;

    void inputStudentDetails()
    {
        cout << "Enter Student id:";
        cin >> student_id;
        cout << "Enter College Code:";
        cin >> college_code;
    }

    void displayStudentDetails()
    {
        cout << "Student id:" << student_id << endl;
        cout << "College code:" << college_code << endl;
    }
};
class test : public virtual CollegeStudent
{
public:
    float percentage;
    void inputTestDetails()
    {
        cout << "Enter Test Marks :";
        cin >> percentage;
    }

    void displayTestDetails()
    {
        cout << "Test Percentage :" << percentage << endl;
    }
};
class sports : public virtual CollegeStudent
{
public:
    char grade;
    void inputSportsDetails()
    {
        cout << "Enter Sports Grade:";
        cin >> grade;
    }

    void displaySportsDetails()
    {
        cout << "Sports grade:" << grade << endl;
    }
};
class Result : public sports, public test
{
    public:
    void inputDetails()
    {
        inputStudentDetails();
        inputTestDetails();
        inputSportsDetails();
    }

    void displayDetails()
    {
        displayStudentDetails();
        displayTestDetails();
        displaySportsDetails();
    }
};
int main()
{
    Result R;
    cout<<"---Enter Details---"<<endl;
    R.inputDetails();
    cout<<endl;
    cout<<"--Result Details--"<<endl;
    R.displayDetails();

    return 0;
}