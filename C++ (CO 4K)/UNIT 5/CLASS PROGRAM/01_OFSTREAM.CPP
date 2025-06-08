#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    string st = "Object Oriented";
    ofstream out("01_SAMPLE.TXT");
    out<<st;
    return 0;
}