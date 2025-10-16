//Lab6
//經濟四 111208094 鄭琬蓁

#include <iostream>
using namespace std;

//EXERCISE 6-1 : COUNT ZEROS UNTIL STOP

int main() 
{   

  int input = 0;
  int countZeros = 0;
  
  while(true){
    
    cin >> input;
    
    if(input == 0){
      countZeros ++;
    }
    else if(input == 1){
      cout << countZeros << endl;
      break;
    }
  }
    
  return 0;
}


//EXERCISE 6-2 :INVERTED PYRAMID

#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    if (n == 0)
    {
        return 0;
    }


    for (int i = n; i >= 1; --i)
    {
        // 空白(讓圖形置中用)
        for (int s = 0; s < n - i; ++s)
        {
            cout << ' ';
        }

        // 遞增部分
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
        }

        // 遞減部分
        for (int j = i - 1; j >= 1; --j)
        {
            cout << j;
        }

        cout << '\n';
    }

    return 0;
}