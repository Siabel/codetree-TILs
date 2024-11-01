#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    str.erase(0,2);
    str = str.substr(0, str.length() - 4);
    cout << str;

    return 0;
}