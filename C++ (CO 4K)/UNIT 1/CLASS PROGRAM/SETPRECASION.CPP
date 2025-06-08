#include <iostream>
#include <iomanip>  // Required for setprecision
using namespace std;

int main() {
    float  n = 3.14159265359;
   
    cout << "Default precision: " << n <<endl;

    cout << setprecision(5);
    cout << "Precision set to 5: " << n <<endl;

    cout << setprecision(10);
    cout << "Precision set to 10: " << n <<endl;

    

    return 0;
}
