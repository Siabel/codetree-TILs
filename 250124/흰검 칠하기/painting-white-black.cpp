#include <iostream>

using namespace std;

#define MAX_K 100000

int n;
int cnt_w[2 * MAX_K + 1];
int cnt_b[2 * MAX_K + 1];
int color[2 * MAX_K + 1];
int idx = MAX_K;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'L') {
            for (int j = 0; j < x; j++) {
                cnt_w[idx]++;
                if (cnt_w[idx] >= 2 && cnt_b[idx] >= 2) {
                    color[idx] = 3;
                } else {
                    color[idx] = 1;
                }
                if (j < x - 1) 
                    idx--;
            }
        } else if (dir == 'R') {
            for (int j = 0; j < x; j++) {
                cnt_b[idx]++;
                if (cnt_w[idx] >= 2 && cnt_b[idx] >= 2) {
                    color[idx] = 3;
                } else {
                    color[idx] = 2;
                }
                if (j < x - 1) 
                    idx++;
            }
        }
    }

    int gray = 0, white = 0, black = 0;
    for (int i = 0; i <= 2 * MAX_K; i++) {
        if (color[i] == 1) 
            white++;
        else if (color[i] == 2)
            black++;
        else if (color[i] == 3) 
            gray++;
    }

    cout << white << " " << black << " " << gray << endl;

    return 0;
}
