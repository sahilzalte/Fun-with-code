#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    string str2;
    ifstream in("02_SAMPLE.TXT");
    in>>str2;
    cout<<str2;
    return 0;
}