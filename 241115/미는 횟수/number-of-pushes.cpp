#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    int cnt = 0;

    while(a != b){
        a = a.substr(a.length() - 1, 1) + a.substr(0, a.length() - 1);
        cnt++;
    }
    
    cout << cnt;
    return 0;
}