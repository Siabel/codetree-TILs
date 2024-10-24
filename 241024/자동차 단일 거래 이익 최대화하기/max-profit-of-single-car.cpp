#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1000];
    int min_val = INT_MAX, max_val = 0;
    int idx = -1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < min_val){
            min_val = arr[i];
            idx = i;
        }
    }

    for(int i = idx; i < n; i++){
        if(arr[i] > max_val){
            max_val = arr[i];
        }
    }

    int benefit = max_val - min_val;
    if(benefit < 0)
        cout << '0';
    else
        cout << benefit;
    return 0;
}