//Week7: Practice2

// Quick Try: Area of Shape

#include <iostream>
#include <cmath>
using namespace std;


// declarations
double area(double r);                      // circle
double area(double w, double h);            // rectangle
double area(double b, double h, string s);  // triangle
double area(double s, bool c);              // square

//function call

int main(){
  
  cout << "Enter shape (C/R/T/S): " << endl;
  char shape; cin >> shape;
  
  switch(shape){
    case 'C':
      cout << "Enter radius:" << endl;
      double r; cin >> r;
      cout << "Area: "<< area(r) << endl;
      break;
    case 'R':
      cout << "Enter width & height: " << endl;
      double w, h ; cin >> w >> h;
      cout << "Area: "<< area(w, h) << endl;
      break;
    case 'T':
      cout << "Enter base & height: " << endl;
      double b, k ; cin >> b >> k;
      cout << "Area: "<< area(b, k, "tri") << endl;
      break;
    case 'S':
      cout << "Enter side: " << endl;
      double s; cin >> s;
      cout << "Area: "<< area(s, true) << endl;
      break;
    default:
      cout << "Not legal. " << endl;
  }
  
  return 0;
}

// definitions

// Circle
double area(double r) {
    return M_PI * r * r;
}

// Rectangle
double area(double w, double h) {
    return w * h;
}

// Triangle
double area(double b, double h, string s) {
    return 0.5 * b * h;
}

// Square
double area(double s, bool c) {
    return s * s;
}

// Quick Try: Income Tax Calculator

#include <iostream>
using namespace std;

int calcTax(int income);

int main() {
    int income;
    cout << "Enter income: ";
    cin >> income;

    cout << "Pay tax: " << calcTax(income) << endl;
    return 0;
}

int calcTax(int in) {
    if (in <= 590000)
        return in * 0.05;
    else if (in <= 1330000)
        return in * 0.12 - 41300;
    else if (in <= 2660000)
        return in * 0.20 - 147700;
    else if (in <= 4980000)
        return in * 0.30 - 413700;
    else
        return in * 0.40 - 911700;
}

