//Week7: Practice1

// 1.Function Declaration & Definition
#include <iostream>
using namespace std;
// declaration
int add(int, int);
// definition
int add(int a, int b) {
return a + b;
}
// function call
int main() {
cout << add(2, 3); // 5
return 0;
} 

// 2.Pass by Value （值傳遞）—— 傳副本
#include <iostream>
using namespace std;

void incv(int x) {
    x = x + 1;
    cout << "inside incv: " << x << endl;
}

int main() {
    int a = 5;
    incv(a);
    cout << "outside incv: " << a << endl;
    return 0;
}

// 3.Pass by Reference （引用傳遞）—— 傳本人
#include <iostream>
using namespace std;

void incr(int &x) {  // 注意這裡的「&」
    x = x + 1;
    cout << "inside incr: " << x << endl;
}

int main() {
    int a = 5;
    incr(a);
    cout << "outside incr: " << a << endl;
    return 0;
}


// 4.void: no return values, typically used for actions rather than calculations
#include <iostream>
using namespace std;

// 定義一個「不回傳值」的函式
void prDash3() {
    cout << "-------" << endl;
}

// 主程式
int main() {
    prDash3();                 // 第一次呼叫 → 印出 -------
    cout << "Content" << endl; // 印出 Content
    prDash3();                 // 第二次呼叫 → 再印出 -------
    return 0;
}


// 5. Scope & Lifetime
#include <iostream>
using namespace std;

int vv = 9; // 全域變數 (global variable)

void func() {
    int vv = 7; // 區域變數 (local variable)
    cout << vv << endl; // 輸出 7（優先使用區域變數）
}

int main() {
    func(); // 呼叫 func() → 印出 7
    cout << "global: " << vv << endl; // 印出全域變數 9
    return 0;
}


// 6.預設參數（Default Arguments）
#include <iostream>
using namespace std;

// 函式宣告與定義：給第二個參數預設值 1，第三個參數預設值 3
void printSum(int a, int b = 1, int c = 3) {
    cout << "Sum = " << a + b + c << endl;
}

// 另一個範例：字串預設值
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    // 測試 printSum()
    printSum(5);        // 5 + 1 + 3 = 9（只傳入一個參數）
    printSum(5, 2);     // 5 + 2 + 3 = 10（省略最後一個參數）
    printSum(5, 2, 7);  // 5 + 2 + 7 = 14（全部傳入）

    cout << endl;

    // 測試 greet()
    greet();            // 使用預設值 → Hello, Guest!
    greet("Charles");   // 傳入參數 → Hello, Charles!

    return 0;
}

// 7.Lambda Expressions（匿名函式）
#include <iostream>
using namespace std;

int main() {
    auto square = [](int x) { return x * x; };
    cout << "4^2 = " << square(4) << endl;

    int x = 5, y = 3, z = 1;

    auto sum2 = [=]() { return x + y; };        // 用「值」捕捉
    auto area = [&, y]() { return z = (y * x++); }; // 用「參考」捕捉 x, z，但 y 是複製

    cout << sum2() << " " << x << endl;  // sum2(): 不改變 x
    cout << area() << " " << x << endl;  // area(): 改變 x（因為 [&]）
    return 0;
}

// 8.Recursion
#include <iostream>
using namespace std;

/*
遞迴 (Recursion) 範例：
用遞迴計算階乘 (factorial)
公式：
n! = n * (n-1)!
Base Case：當 n <= 1 時，回傳 1
*/

int fact(int x) {
    // Base Case：當 x <= 1 時，停止遞迴
    if (x <= 1) 
        return 1;

    // Recursive Case：自己呼叫自己
    // 例如 fact(5) = 5 * fact(4)
    return x * fact(x - 1);
}

int main() {
    // 測試：計算 5!（=120）
    cout << "5! = " << fact(5) << endl;

    /*
    執行過程：
    fact(5) = 5 * fact(4)
    fact(4) = 4 * fact(3)
    fact(3) = 3 * fact(2)
    fact(2) = 2 * fact(1)
    fact(1) = 1
    最後回傳 120
    */
    
    return 0;
}

// 9.prime number

#include <iostream>
using namespace std;

/*
函式：判斷某個數字是否為質數 (prime number)
質數定義：只能被 1 和自己整除的整數（例如 2, 3, 5, 7, 11, 13 ...）
*/

bool prime(int n) {
    // 從 2 開始試除到 n-1
    for (int i = 2; i < n; ++i) {
        // 如果可以被整除，表示不是質數
        if (n % i == 0)
            return false;
    }
    // 沒有整除成功 → 是質數
    return true;
}

int main() {
    int num = 11;

    // 三元運算子用法：
    // 條件 ? 當為真時的值 : 當為假時的值
    cout << num << " is "
         << (prime(num) ? "" : "not")   // 這行會輸出 "not" 或 空字串
         << " a prime\n";

    return 0;
}

