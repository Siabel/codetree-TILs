#include <iostream>

using namespace std;

int N, M;
int v1[1000], t1[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> v1[i] >> t1[i];
    for (int i = 0; i < M; i++) cin >> v2[i] >> t2[i];

    int pos1 = 0, pos2 = 0;
    int idx1 = 0, idx2 = 0;
    int time1 = 0, time2 = 0;
    int first = 0, change = 0;

    for (int t = 0; ; t++) {
        // 현재 시간이 끝났다면 다음 속도로 이동
        if (idx1 < N && time1 == t1[idx1]) {
            time1 = 0;
            idx1++;
        }
        if (idx2 < M && time2 == t2[idx2]) {
            time2 = 0;
            idx2++;
        }

        // 이동 거리 업데이트
        if (idx1 < N) {
            pos1 += v1[idx1];
            time1++;
        }
        if (idx2 < M) {
            pos2 += v2[idx2];
            time2++;
        }

        // 종료 조건: 더 이상 이동할 수 없을 때
        if (idx1 >= N && idx2 >= M) break;

        // 1등 판별
        if (t == 0) {
            if (pos1 > pos2) first = 1;
            else if (pos1 < pos2) first = 2;
        } else {
            if (pos1 > pos2 && first == 2) {
                first = 1;
                change++;
            }
            else if (pos1 < pos2 && first == 1) {
                first = 2;
                change++;
            }
        }
    }

    cout << change;
    return 0;
}
