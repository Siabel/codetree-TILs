#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int start = 11;

    for(int i = 0; i < n; i++){
        int num = start + 2 * i;
        
        for(int j = 0; j < n; j++){
            cout << num + 2 * j << " ";
        }
        cout << endl;
    }
    return 0;
}