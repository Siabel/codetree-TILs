#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int arr[10][10] = {};

    for(int i = 1; i <= m; i++){
        int r, c;
        cin >> r >> c;

        arr[r - 1][c - 1] = r * c;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}