#include <iostream>

using namespace std;

int N;
int x[100], y[100];
int board[100][100] = {};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];

        for(int X = x[i]; X < x[i] + 8; X++){
            for(int Y = y[i]; Y < y[i] + 8; Y++){
                board[X][Y] = 1;
            }
        }
    }

    // Write your code here!
    int cnt = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(board[i][j] == 1)
                cnt++;
        }
    }

    cout << cnt;

    return 0;
}