#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    int n, len = str.length();
    cin >> n;

    for(int i = len - 1; i >= len - n; i--){
        cout << str[i];
    }
    
    return 0;
}