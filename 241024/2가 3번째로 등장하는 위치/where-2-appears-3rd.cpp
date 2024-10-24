#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int idx = -1;
    int cnt = 0;
    int arr[100];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(arr[i] == 2)
            cnt++;
        if(cnt == 3){
            idx = i;
            break;
        }
    }

    cout << idx + 1;
    return 0;
}