#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(2);
    int n;
    cin >> n;
    string arr[20];
    int sum = 0;
    int cnt = 0;
    char alp;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> alp;

    for(int i = 0; i < n; i++){
        if(arr[i][0] == alp){
            sum += arr[i].length();
            cnt++;
        }
    }

    cout << cnt << " " << (double) sum / cnt;
    return 0;
}