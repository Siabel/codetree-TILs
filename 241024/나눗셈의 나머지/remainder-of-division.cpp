#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int arr[10] = {};
    int sum = 0;

    for(int i = 0; i < 100; i++){
        arr[a % b]++;
        a /= b;

        if(a == 0)
            break;
    }

    for(int i = 0; i < 10; i++){
        sum += (arr[i] * arr[i]);
    }

    cout << sum;
    return 0;
}