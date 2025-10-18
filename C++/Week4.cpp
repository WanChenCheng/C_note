// Week4: Practice

// Quick Try: Interest Calculation
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
    double principal;
    const float rate = 0.045;
    double timee;
    double interest;
    
    cout << "input principal & time:";
    cin >> principal >> timee;
    
    interest = principal * rate * timee;
    cout << "interest = " << fixed << setprecision(1) << interest;
    
    return 0;
}

// Quick Try: Wheel Circumference
#include <iostream>
#include <cmath>   // ceil()
#define PI 3.14159265
using namespace std;

int main() {
    
    double radius, circumference;

    cout << "Input radius: ";
    cin >> radius;

    circumference = 2 * PI * radius;          
    cout << "Circumference = " << ceil(circumference) << endl; 

    return 0;
}