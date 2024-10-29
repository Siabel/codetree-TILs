#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[10], tot_str = "";
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        tot_str += arr[i];
    }

    cout << tot_str;
    
    return 0;
}