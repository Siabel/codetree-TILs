#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    string change_str = "";

    for(int i = 0; i < 2; i++){
        change_str += a[i];
    }

    for(int i = 0; i < 2; i++){
        b[i] = change_str[i];
    }

    cout << b;

    return 0;
}