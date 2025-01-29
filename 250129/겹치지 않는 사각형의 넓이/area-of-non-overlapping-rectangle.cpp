#include <iostream>
#define MAX 1000
using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];
int board[MAX * 2][MAX * 2] = {};

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Write your code here!
    for(int i = 0; i < 3; i++){
        for(int x = x1[i] + MAX; x < x2[i] + MAX; x++){
            for(int y = y1[i] + MAX; y < y2[i] + MAX; y++){
                if(i == 2){
                    board[x][y] = 0;
                }
                else{
                    board[x][y] = 1;
                }
            }
        }
    }

    int cnt = 0;

    for(int i = 0; i < MAX * 2; i++){
        for(int j = 0; j < MAX * 2; j++){
            if(board[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt;

    return 0;
}