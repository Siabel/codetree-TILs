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

    int min_x = 2 * MAX, min_y = 2 * MAX;
    int max_x = -1, max_y = -1;

    for(int i = 0; i < 2 * MAX; i++) {
        for(int j = 0; j < 2 * MAX; j++) {
            if(board[i][j] == 1) {
                min_x = min(min_x, i);
                max_x = max(max_x, i);
                min_y = min(min_y, j);
                max_y = max(max_y, j);
            }
        }
    }

    if (max_x == -1 || max_y == -1) {
        cout << "0\n";
        return 0;
    }

    int width = max_x - min_x + 1;
    int height = max_y - min_y + 1;

    // cout << max_x - MAX << " " << min_x - MAX<< " " << max_y- MAX << " " << min_y- MAX << "\n";
    cout << (width * height) << "\n";

    return 0;
}