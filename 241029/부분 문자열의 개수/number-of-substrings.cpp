#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    
    for(int i = 0; i <= a.length(); i++){
        if(a.find(b) != string::npos)
            cnt++;
    }
    cout << cnt;
    return 0;
}