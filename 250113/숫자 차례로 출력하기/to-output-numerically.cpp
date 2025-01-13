#include <iostream>
using namespace std;

int N;

// 오름차순 출력 함수
void PrintNumAsc(int n) {
    if (n == 0)  // 재귀 종료 조건
        return;

    PrintNumAsc(n - 1); // 1부터 n까지 출력
    cout << n << " ";
}

// 내림차순 출력 함수
void PrintNumDesc(int n) {
    if (n == 0)  // 재귀 종료 조건
        return;

    cout << n << " ";  // n부터 1까지 출력
    PrintNumDesc(n - 1);
}

int main() {
    cin >> N;

    PrintNumAsc(N);   // 오름차순 출력
    cout << "\n";     // 줄바꿈
    PrintNumDesc(N);  // 내림차순 출력

    return 0;
}
