// Week 2: Practice

#include <iostream>
#define PI 3.14159   // 定義一個常數 PI
using namespace std;

int main() 
{
    // -------------------------
    // Part 1: Escape Characters
    // -------------------------
    cout << "\'system\' is located at\n";
    cout << "\t\"C:\\\";" << endl << endl;

    // -------------------------
    // Part 2: Circle Area using #define
    // -------------------------
    int r = 5;
    float area = r * r * PI;   // PI 會被替換成 3.14159
    cout << "Area = " << area << endl << endl;

    // -------------------------
    // Part 3: Temperature Conversion
    // -------------------------
    float c = 32.0;
    float f;

    f = c * (9.0 / 5.0) + 32;   // 要用浮點數除法！
    cout << c << " in C = " << f << " in F" << endl;

    return 0;
}
