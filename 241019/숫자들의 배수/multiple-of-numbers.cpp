#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    int arr[11] = {};
    arr[0] = n;

    for(int i = 1; i < 11; i++){
        arr[i] = n * (i + 1);
    }
    
    for(int i = 0; i < 11; i++){
        if(cnt == 2)
            break;
        if(arr[i] % 5 == 0){
            cnt++;
        }
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }

    return 0;
}