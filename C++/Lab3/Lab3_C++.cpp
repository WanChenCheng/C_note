#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream iff("data.txt");
    int a, b;

    // 第 1 行
    iff >> a >> b;
    cout << "Line 1: Sum=" << a+b
         << ", Diff=" << a-b
         << ", Prod=" << a*b
         << ", Quot=" << a/b << endl;

    // 第 2 行
    iff >> a >> b;
    cout << "Line 2: Sum=" << a+b
         << ", Diff=" << a-b
         << ", Prod=" << a*b
         << ", Quot=" << a/b << endl;

    // 第 3 行
    iff >> a >> b;
    cout << "Line 3: Sum=" << a+b
         << ", Diff=" << a-b
         << ", Prod=" << a*b
         << ", Quot=" << a/b << endl;

    return 0;
}


