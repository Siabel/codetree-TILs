#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    char first, second;
    first = str[0];
    second = str[1];

    for(int i = 0; i < str.length(); i++){
        if(str[i] == second)
            str[i] = first;
    }

    cout << str;
    
    return 0;
}