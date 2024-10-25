#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr_a[3][3];
    int arr_b[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr_a[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr_b[i][j];
        }
    }

    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr_a[i][j] * arr_b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}