//經濟四 111208094 鄭琬蓁

//EXERCISE 5-1: SORT THREE NUMBERS
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int smallest = min(a, min(b, c));
    int largest = max(a, max(b, c));
    int middle = a + b + c - smallest - largest;

    cout << smallest << " " << middle << " " << largest << endl;
    return 0;
}


//EXERCISE 5-2: TAXI FARE CALCULATOR
#include <iostream>
using namespace std;

int main() {
    double distance;
    cin >> distance;

    double fare = 70.0;

    if (distance > 1.5) {
        fare += (distance - 1.5) * 10 * 5; // (公里差 * 10) = 幾個 0.1 km
    }

    if (distance > 20.0) {
        fare *= 1.1; // 大於20公里多收 10% 錢錢
    }

    cout << fare << endl;

    return 0;
}

