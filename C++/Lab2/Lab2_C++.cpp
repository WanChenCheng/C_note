//Lab2
//經濟四乙 111208094 鄭琬蓁

//Quick Try:
//Temperature Conversion

/*
#include <iostream>
using namespace std;

int main() {
    double cel = 0.0, fah = 0.0;

    cout << "Enter temperature in Celsius: ";
    cin >> cel;
    
    // 公式轉換
    fah = (9.0 / 5.0) * cel + 32; 
    
    //輸出
    cout << cel << " in C = " << fah << " in F" << endl;

    return 0;
}
*/

//EXERCISE 2-1 : UNIFORMLY ACCELERATED MOTION

#include <iostream>
using namespace std;

int main() {
    // Define variables
    double u = 20.0;  // initial velocity (0.0 ~ 100.0)
    double a = 0.0;   // acceleration (-10.0 ~ 10.0)
    int t = 8;        // time (1 ~ 100)

    // Compute displacement
    double s = (u * t) + (0.5 * a * t * t);

    // Display
    cout << "Initial Velocity: " << u << endl;
    cout << "Acceleration: " << a << endl;
    cout << "Time: " << t << endl;
    cout << "Displacement: " << s << endl;

    return 0;
}

// EXERCISE 2-2 : WEIGHTED AVERAGE SCORE

#include <iostream>
using namespace std;

int main() {
    // Define constant weights
    const double WM = 1.0; // math weight
    const double WP = 1.5; // physics weight
    const double WC = 2.5; // chemistry weight
    const double WE = 3.3; // english weight

    // We will change scores here (0 ~ 100)
    int math = 20;
    int physics = 40;
    int chemistry = 60;
    int english = 80;

    // Compute weighted score
    double WS = (math * WM + physics * WP + chemistry * WC + english * WE) / 
                (WM + WP + WC + WE);

    // Display
    cout << "Math: " << math << endl;
    cout << "Physics: " << physics << endl;
    cout << "Chemistry: " << chemistry << endl;
    cout << "English: " << english << endl;
    cout << "Weighted Score: " << WS << endl;

    return 0;
}