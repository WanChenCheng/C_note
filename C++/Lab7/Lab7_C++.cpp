// Lab7
// 經濟四 111208094 鄭琬蓁

// Exercise 7-1: Palindrome Number
#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

bool isPalindrome(int n) {
    return n == reverse(n);
}

int main() {
    int n;
    cin >> n;
    cout << (isPalindrome(n) ? 1 : 0);
    return 0;
}

// Exercise 7-2: Climbing Stairs
#include <iostream>
using namespace std;

int climb(int current, int n) {
    if (current % 3 == 0 && current != 0) return 0; // 不能落在3的倍數
    if (current > n) return 0;          // 超過目標
    if (current == n) return 1;         // 剛好到達
    return climb(current + 1, n) + climb(current + 2, n);
}

int main() {
    int n;
    cin >> n;
    cout << climb(0, n);
    return 0;
}
