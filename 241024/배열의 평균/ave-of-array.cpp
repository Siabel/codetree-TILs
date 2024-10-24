#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);

    int arr[2][4];
    int sum_all = 0;
    int sum_row[4] = {};

    for(int i = 0; i < 2; i++){
        int sum_col = 0;
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
            
            sum_row[j] += arr[i][j];
            sum_all += arr[i][j];
            sum_col += arr[i][j];
        }
        cout << (double)sum_col / 4 << " ";
    }
    
    cout << endl;
    
    for(int i = 0; i < 4; i++){
        cout << (double)sum_row[i] / 2 << " ";
    }

    cout << endl;
    cout << (double)sum_all / 8;

    return 0;
}