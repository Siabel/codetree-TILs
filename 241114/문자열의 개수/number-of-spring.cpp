#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int cnt = 0;
    string arr[201] = {};

    for(int i = 0; i < 201; i++){
        cin >> s;
        if(s == "0")
            break;

        cnt++;
        if(i % 2 == 0){
            arr[i] = s;
        }
    }

    cout << cnt << "\n";

    for(int i = 0; i < cnt; i += 2){
        if(arr[i] == "")
            break;
        cout << arr[i] << "\n";
    }
    return 0;
}