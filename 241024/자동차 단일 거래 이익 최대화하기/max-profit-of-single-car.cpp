#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[1000];
    int min_val = INT_MAX;
    int idx = -1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int max_profit = 0;     // 최대 이익

    // 배열을 한 번 순회하면서 최대 이익을 계산
    for(int i = 0; i < n; i++) {
        if(arr[i] < min_val) {
            min_val = arr[i];  // 최소값을 업데이트
        }
        int current_profit = arr[i] - min_val;  // 현재까지의 이익 계산
        if(current_profit > max_profit) {
            max_profit = current_profit;  // 최대 이익 갱신
        }
    }

    if(max_profit < 0)
        cout << '0';
    else
        cout << max_profit;
        
    return 0;
}