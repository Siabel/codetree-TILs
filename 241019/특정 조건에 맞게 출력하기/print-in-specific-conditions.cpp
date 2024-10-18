#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100] = {};

    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 0)
            break;
        else if(arr[i] % 2 == 1)
            arr[i] += 3;
        else if(arr[i] % 2 == 0)
            arr[i] /= 2;
    }

    for(int i = 0; i < 100; i++){
        if(arr[i] != 0)
            cout << arr[i] << " ";
    }

    return 0;
}