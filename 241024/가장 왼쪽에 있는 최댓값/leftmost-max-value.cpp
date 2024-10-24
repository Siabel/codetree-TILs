#include <iostream>
#include <vector>
using namespace std;

int findMaxIndex(const vector<int>& arr, int end) {
    int maxIndex = 0;
    for (int i = 1; i <= end; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int end = N - 1;

    // 최댓값의 위치들을 반복하여 출력
    while (end >= 0) {
        int maxIndex = findMaxIndex(arr, end);
        cout << maxIndex + 1 << " ";  // 위치를 1-based로 출력
        end = maxIndex - 1;  // 최댓값의 왼쪽 부분만 다시 검색
    }

    return 0;
}