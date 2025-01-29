#include <iostream>

using namespace std;

int n;
int x1[10], y1[10];
int x2[10], y2[10];
int board[200][200] = {};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        
        for(int x = x1[i] + 100; x < x2[i] + 100; x++){
            for(int y = y1[i] + 100; y < y2[i] + 100; y++){
                if(i % 2 == 0)
                    board[x][y] = 1;                    
                else
                    board[x][y] = 2;
            }
        }
    }

    // Write your code here!
    int res = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(board[i][j] == 2)
                res++;
        }
    }

    cout << res;    

    return 0;
}