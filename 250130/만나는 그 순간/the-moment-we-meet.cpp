#include <iostream>
using namespace std;

const int OFFSET = 1000000;  // 음수 인덱스 방지용 오프셋
const int SIZE = 2000000;    // 최대 범위 설정 (0 ~ 2,000,000)

int n, m;
char A_d[1000];
int A_t[1000];
char B_d[1000];
int B_t[1000];

int main() {
    cin >> n >> m;

    int A_idx = OFFSET, B_idx = OFFSET;  // 오프셋을 적용한 초기 위치
    int A_cnt = 0, B_cnt = 0;  // 총 이동 횟수
    int A_pos[SIZE], B_pos[SIZE];  // 경로 저장 배열

    // A 이동 처리
    for (int i = 0; i < n; i++) {
        cin >> A_d[i] >> A_t[i];
        for (int j = 0; j < A_t[i]; j++) {
            A_idx += (A_d[i] == 'L' ? -1 : 1);
            A_pos[A_cnt++] = A_idx;
        }
    }

    // B 이동 처리
    for (int i = 0; i < m; i++) {
        cin >> B_d[i] >> B_t[i];
        for (int j = 0; j < B_t[i]; j++) {
            B_idx += (B_d[i] == 'L' ? -1 : 1);
            B_pos[B_cnt++] = B_idx;
        }
    }

    // 최소 이동 횟수만큼 비교
    int min_cnt = min(A_cnt, B_cnt);
    for (int i = 0; i < min_cnt; i++) {
        if (A_pos[i] == B_pos[i]) {
            cout << i + 1;  // 시간은 1부터 시작하므로 i+1 출력
            return 0;
        }
    }

    cout << -1;  // 만나지 않는 경우
    return 0;
}
