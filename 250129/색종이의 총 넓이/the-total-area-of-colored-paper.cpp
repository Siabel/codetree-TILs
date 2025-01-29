#include <iostream>

using namespace std;

int N;
int x[100], y[100];
int board[200][200] = {};

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];

        for(int X = x[i] + 100; X < x[i] + 108; X++){
            for(int Y = y[i] + 100; Y < y[i] + 108; Y++){
                board[X][Y] = 1;
            }
        }
    }

    // Write your code here!
    int cnt = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(board[i][j] == 1)
                cnt++;
        }
    }

    cout << cnt;

    return 0;
}