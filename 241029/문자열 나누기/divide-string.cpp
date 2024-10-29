#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string arr[10], tot_str = "";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        tot_str += arr[i];
    }

    for(int i = 0; i < tot_str.length(); i++){
        for(int j = i * 5; j < i * 5 + 5 && j < tot_str.length(); j++){
            cout << tot_str[j];
        }
        cout << endl;
    }

    return 0;
}