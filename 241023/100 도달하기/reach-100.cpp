#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[100];
    cin >> n;

    arr[0] = 1, arr[1] = n;

    for(int i = 0; i < 100; i++){
        arr[i + 2] = arr[i + 1] + arr[i];
        cout << arr[i] << " ";

        if(arr[i] > 100)
            break;
    }

    return 0;
}