#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string str2;
    ifstream in("03_SAMPLE.TXT");
    
    if (in) {
        while (getline(in, str2)) {  // Read each line until the end of the file
            cout << str2 << endl;
        }
    } else {
        cout << "Error opening file!";
    }

    return 0;
}
