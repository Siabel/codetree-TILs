#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1000];
    int count_arr[1000] = {};
    int max_val = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        count_arr[arr[i]]++;
    }

    for(int i = 0; i < 1000; i++){
        if(count_arr[i] == 1)
            max_val = i;
    }

    if(max_val == 0)
        cout << "-1";
    else
        cout << max_val;
    return 0;
}