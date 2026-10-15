#include <iostream>
#include <string>

using namespace std;

int main() {
    string id;
    string name;

    cout << "請輸入學號: ";
    cin >> id;
    cout << "請輸入姓名: ";
    cin >> name;

    cout << "\n=== 個人資訊 ===" << endl;
    cout << "學號: " << id << endl;
    cout << "姓名: " << name << endl << endl;

    // For loop
    cout << "=== For 迴圈執行結果 ===" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "For count: " << i << endl;
    }
    cout << endl;

    // While loop
    cout << "=== While 迴圈執行結果 ===" << endl;
    int j = 1;
    while (j <= 5) {
        cout << "While count: " << j << endl;
        j++;
    }
    cout << endl;

    // Do-while loop
    cout << "=== Do-While 迴圈執行結果 ===" << endl;
    int k = 1;
    do {
        cout << "Do-While count: " << k << endl;
        k++;
    } while (k <= 5);

    return 0;
}