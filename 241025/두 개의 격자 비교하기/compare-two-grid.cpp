#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int arr_a[10][10];
    int arr_b[10][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr_a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr_b[i][j];
        }
    }

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr_a[i][j] == arr_b[i][j])
                cout << "0 ";
            else
                cout << "1 ";
        }

        cout << endl;
    }
    return 0;
}