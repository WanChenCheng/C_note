//Lab04
//經濟四乙 111208094 鄭琬蓁

//EXERCISE 4-1: RANDOM NUMBER
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;   

    // 設定隨機種子
    srand(time(0));

    // 範圍上下界
    int low = min(a, b);
    int high = max(a, b);

    // 生成範圍內的隨機數
    int randNum = rand() % (high - low + 1) + low;

    cout << randNum << endl;
    return 0;
}


//EXERCISE 4-2: HEIGHT OF THE LONGEST SIDE
#include <iostream>
#include <cmath>
#include <algorithm> // for max
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    // 半周長
    double s = (a + b + c) / 2.0;

    // 面積 (Hero's formula)
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // 最長邊
    double maxSide = max({a, b, c});

    // 高度
    double height = (2 * area) / maxSide;

    cout << "The height of the longest side: " << height << endl;

    return 0;
}



