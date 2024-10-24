#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int first = INT_MIN, second = INT_MIN;
    int idx = -1;

    // 1. 최댓값을 기준으로 정해놓고 큰 거 2개만 찾기
    // 2. 진짜 내림차순 정렬하기

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > first){
            first = arr[i];
            idx = i;
        }
    }

    for(int i = 0; i < n; i++){
        if(idx != i && arr[i] == first)
            {
                second = arr[i];
                break;
            }
        else if(idx != i && arr[i] > second)
            second = arr[i];
    }

    cout << first << " " << second;

    return 0;
}