#include <iostream>
#define MAX 100
using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int board[2 * MAX][2 * MAX] = {};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        for(int j = x1[i] + MAX; j < x2[i] + MAX; j++){
            for(int k = y1[i] + MAX; k < y2[i] + MAX; k++){
                board[j][k] = 1;
            }
        }
    }

    int extent = 0;
    for(int i = 0; i < 2 * MAX; i++){
        for(int j = 0; j < 2 * MAX; j++){
            if(board[i][j])
                extent++;
        }
    }

    cout << extent;
    return 0;
}