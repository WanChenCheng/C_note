// Week5: Practice

// Quick Try: Check Odd or Even
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: " << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0;
}


// Quick Try: Mapping Day of Week
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter number: "<< endl;
    cin >> num;

    switch(num){
      case 1: 
         cout << "Monday" << endl;
         break;
      case 2: 
         cout << "Tuesday" << endl;
         break;
      case 3: 
         cout << "Wednesday" << endl;
         break;
      case 4: 
         cout << "Thursday" << endl;
         break;
      case 5: 
         cout << "Friday" << endl;
         break;
      case 6: 
         cout << "Saturday" << endl;
         break;
      case 7: 
         cout << "Sunday" << endl;
         break;
      default: 
         cout << "???" << endl;
         break;
    }

    return 0;
}

// Quick Try: Restaurant Menu

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter item (1-Burger, 2-Fries, 3-Coke, 4-Milk Shake): " << endl;
    cin >> num;

    switch(num){
      case 1: 
         cout << "Pay 60 for Burgers" << endl;
         break;
      case 2: 
         cout << "Pay 40 for Fries" << endl;
         break;
      case 3: 
         cout << "Pay 30 for Coke" << endl;
         break;
      case 4: 
         cout << "Pay 50 for Milk Shake" << endl;
         break;
      default: 
         cout << "Invalid choice! Please enter 1–4." << endl;
    }

    return 0;
}






























