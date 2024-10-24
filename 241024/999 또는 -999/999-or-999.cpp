#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int min_val = INT_MAX, max_val = INT_MIN;
    int arr[100];

    for(int i = 0; i < 100; i++){
        cin >> arr[i];
        if(arr[i] == 999 || arr[i] == -999)
            break;
        if(arr[i] > max_val)
            max_val = arr[i];
        if(arr[i] < min_val)
            min_val = arr[i];
    }

    cout << max_val << " " << min_val;
    return 0;
}