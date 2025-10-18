// Week 3: Practice Integration
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//-----------------------------------------
// Part 1: Input Error Handling
//-----------------------------------------
void practiceInputError() {
    int age, score;

    cout << "Your age: ";
    cin >> age;

    if (cin.fail()) { // 檢查輸入是否出錯
        cin.clear();              // 清除錯誤狀態
        cin.ignore(100, '\n');    // 清除緩衝區中錯誤輸入
        cout << "Invalid input! Please enter an integer." << endl;
        return; // 結束此功能
    }

    cout << "Your score: ";
    cin >> score;

    cout << "Age = " << age << ", Score = " << score << endl;
}

//-----------------------------------------
// Part 2: cin, getline, get
//-----------------------------------------
void practiceCinGetlineGet() {
    string word;
    cout << "Enter one word (cin >>): ";
    cin >> word;  // 只讀到空白前
    cout << "You entered: " << word << endl;

    cin.ignore(100, '\n'); // 清掉緩衝區

    string line;
    cout << "\nEnter a full sentence (getline): ";
    getline(cin, line);  // 會讀整行
    cout << "You entered: " << line << endl;

    char ch;
    cout << "\nPress any key (cin.get): ";
    cin.get(ch);
    cout << "You pressed: [" << ch << "]" << endl;
}

//-----------------------------------------
// Part 3: Write File
//-----------------------------------------
void practiceWriteFile() {
    string name;
    int age;

    cin.ignore(100, '\n'); // 清掉緩衝區（避免getline被跳過）
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    ofstream fout("info.txt");

    if (!fout) {
        cout << "Error: Cannot open file!" << endl;
        return;
    }

    fout << "Hello, " << name << "!" << endl;
    fout << "Your age is " << age << "." << endl;
    fout.close();

    cout << "Data has been written to 'info.txt' successfully!" << endl;
}

//-----------------------------------------
// Part 4: Read File
//-----------------------------------------
void practiceReadFile() {
    ifstream fin("info.txt");

    if (!fin.is_open()) {
        cout << "Error: Failed to open file!" << endl;
        return;
    }

    cout << "Reading data from file..." << endl;
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();
    cout << "File reading completed!" << endl;
}

//-----------------------------------------
// Main Menu
//-----------------------------------------
int main() {
    int choice;

    do {
        cout << "\n============================\n";
        cout << "   Week 3: Practice Menu\n";
        cout << "============================\n";
        cout << "1. Input Error Handling\n";
        cout << "2. cin / getline / get\n";
        cout << "3. Write to File\n";
        cout << "4. Read from File\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                practiceInputError();
                break;
            case 2:
                practiceCinGetlineGet();
                break;
            case 3:
                practiceWriteFile();
                break;
            case 4:
                practiceReadFile();
                break;
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }

        cout << "\n";
    } while (choice != 0);

    return 0;
}


// Quick Try: Name & Age
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter name and age: ";
    cin >> name >> age;

    cout << name << " is " << age << " years old." << endl;

    return 0;
}

// Quick Try: Calculating BMI
#include <iostream>
#include <iomanip>  // setprecision()
using namespace std;

int main() {
    float cm, m, kg;
    double bmi;
    
    cout << "Enter height(cm) and weight(kg): ";
    cin >> cm >> kg;
    
    m = cm / 100;                  
    bmi = kg / (m * m);            
    
    cout << "BMI = " << fixed << setprecision(2) << bmi << endl;
    
    return 0;
}







