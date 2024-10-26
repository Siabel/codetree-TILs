#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char alp;
    cin >> alp;
    int cnt = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 2; j < 4; j++){
            if(alp == arr[i][j]){
                cout << arr[i] << endl;
                cnt++;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}