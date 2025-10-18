// Week6: Practice

// Quick Try: Sum Calculation
#include <iostream>
using namespace std;

int main() {
  
  int num;
  int total = 0;
  
  cout << "Enter n: " << endl;
  cin >> num;
  
  for (int i=0; i<=num; i++){
    total = total + i;
  }
  
  cout << total << endl;
  
  return 0;
  
}


// Quick Try: Star Triangle Pattern

#include <iostream>
using namespace std;

int main() {
  
  for (int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
      cout << "*";
    }
    cout << "" << endl;
  }
  
  
  return 0;
  
}

// Quick Try: Password Retry
#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "FCP2025";  
    string password;

    do {
        cout << "Enter Password: ";
        getline(cin, password);

        if (password != correctPassword) {
            cout << "Incorrect! Try again." << endl;
        }
    } while (password != correctPassword);

    cout << "Success!" << endl;

    return 0;
}

// Quick Try: Character Counting
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    char target;
    int count = 0;

    cout << "Enter sentence: ";
    getline(cin, sentence);  

    cout << "Enter char: ";
    cin >> target;  

    // 遍歷整個字串
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == target) {  // 比對是否相同，sentence[i]為取出字串中第 i 個字元
            count++;  // 若相同就累加
        }
    }

    cout << count << " " << target << "'s" << endl;

    return 0;
}

// Quick Try: Number Guessing Game
#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

int main() {
    int target, guess;

    srand(time(0));
    target = rand() % 10 + 1;  // 亂數範圍：1~10，%為取餘數，隨便一個數字除以10的餘數都落在1-9

    while (true) {
        cout << "Enter guess: ";
        cin >> guess;

        if (guess < target) {
            cout << "too low" << endl;
        } 
        else if (guess > target) {
            cout << "too high" << endl;
        } 
        else {
            cout << "Bingo!" << endl;
            break;
        }
    }

    return 0;
}

// Quick Try: Multiplication Table
#include <iostream>
using namespace std;

int main() {
  
  for (int i=1; i<=4; i++){
    for(int j=1; j<=4; j++){
      cout << i << "x" << j << "=" << i*j <<" ";
    }
    cout << "" << endl;
  }
  
  return 0;
  
}

// In-Class Exercises (1)
#include <iostream>
using namespace std;

int main() {
  
  for(int num=1; num<=100; num++ ){
    if( num %3 == 0 && num %5 == 0 ){
      cout << "FizzBuzz" << endl;
    }
    else if ( num %3 == 0 ){
      cout << "Fizz" << endl;
    }
    else if ( num %5 == 0 ){
      cout << "Buzz" << endl;
    }
    else{
      cout << num << endl;
    }
  }
  
  return 0;
  
}


// In-Class Exercises (2)
#include <iostream>
#include <string>
using namespace std;

int main() {
  
  int height;
  cout << "Enter height: " << endl;
  cin >> height;
  
  for(int i=1; i<=height; i++ ){
    
    cout << string (height - i, ' ' );

    for(int j=1; j<=i; j++){
      cout << j;
    }
    for(int j=i-1; j>=1; j--){ //印出下降的數字（i-1 到 1）
      cout << j;
    }
    cout << "" << endl;
  }
  
  return 0;
  
}



































