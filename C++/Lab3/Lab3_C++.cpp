//Lab3
//經濟四 111208094 鄭琬蓁

//EXERCISE 3-1 : SIMPLE FILE INPUT PRACTICE
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream iff("data.txt");
    int a, b;

    // 1
    iff >> a >> b;
    cout << "Line 1: Sum=" << a+b
         << ", Diff=" << a-b
         << ", Prod=" << a*b
         << ", Quot=" << a/b << endl;

    // 2
    iff >> a >> b;
    cout << "Line 2: Sum=" << a+b
         << ", Diff=" << a-b
         << ", Prod=" << a*b
         << ", Quot=" << a/b << endl;

    // 3
    iff >> a >> b;
    cout << "Line 3: Sum=" << a+b
         << ", Diff=" << a-b
         << ", Prod=" << a*b
         << ", Quot=" << a/b << endl;

    return 0;
}


//EXERCISE 3-2 : CAFÉ RECEIPT
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string productName, cashierName;
    int quantity;
    double unitPrice;

    getline(cin, productName);
    cin >> quantity;
    cin >> unitPrice;
    cin.ignore();//清掉換行
    
    getline(cin, cashierName);

    double total = quantity * unitPrice;

    //調格式
    cout << left << setw(20) << "Item"
         << right << setw(6) << "Qty"
         << setw(10) << "Unit"
         << setw(12) << "Total" << endl;

    cout << left << setw(20) << productName
         << right << setw(6) << quantity
         << fixed << setprecision(2)
         << setw(10) << unitPrice
         << setw(12) << total << endl;

    cout << "Cashier: " << cashierName << endl;

    return 0;
}


