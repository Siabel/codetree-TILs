#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j >= i){
                if(cnt < 10){
                    cout << cnt << " ";
                    cnt++;
                }
                else{
                    cnt = 1;
                    cout << cnt << " ";
                    cnt++;
                }
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}