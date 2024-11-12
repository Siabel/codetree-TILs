#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    cin >> a >> b;

    int start_idx;

    while(a.length() > b.length()){
        for(int i = 0; i < a.length() - 1; i++){
            if(b[0] == a[i] && b[1] == a[i + 1]){
                start_idx = i;
                break;
            }
        }

        a.erase(start_idx, 2);
    }

    cout << a;

    return 0;
}