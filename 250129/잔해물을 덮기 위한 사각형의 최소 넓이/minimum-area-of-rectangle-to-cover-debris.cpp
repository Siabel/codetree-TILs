#include <iostream>
#define MAX 1000
using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];
int board[MAX * 2][MAX * 2] = {};

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Write your code here!
    for(int x = x1[0] + MAX; x < x2[0] + MAX; x++){
        for(int y = y1[0] + MAX; y < y2[0] + MAX; y++){
            board[x][y] = 1;
        }
    }

    for(int x = x1[1] + MAX; x < x2[1] + MAX; x++){
        for(int y = y1[1] + MAX; y < y2[1] + MAX; y++){
            board[x][y] = 0;
        }
    }

    int min_x = MAX, min_y = MAX;
    int max_x = 0, max_y = 0;

    for(int i = 0; i < 2 * MAX; i++){
        for(int j = 0; j < 2 * MAX; j++){
            if(board[i][j] == 1){
                if(min_x > i)
                    min_x = i;
                if(max_x < i)
                    max_x = i;

                if(min_y > j)
                    min_y = j;
                if(max_y < j)
                    max_y = j;
            }
        }
    }

    // cout << max_x << " " << min_x << " " << max_y << " " << min_y << "\n";
    cout << (max_x - min_x - 1) * (max_y - min_y);
    return 0;
}