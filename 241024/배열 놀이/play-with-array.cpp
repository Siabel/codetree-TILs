#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q;
    cin >> n >> q;

    int arr[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < q; i++){
        int type, a, b, s, e;
        cin >> type;
        
        if(type == 1){
            cin >> a;
            cout << a << endl;
        }
        else if(type == 2){
            cin >> b;
            int idx = -1;
            for(int i = 0; i < n; i++){
                if(arr[i] == b){
                    idx = i;
                    break;
                }
            }
            if(idx == -1)
                cout << '0' << endl;
            else
                cout << idx << endl;
        }
        else{
            cin >> s >> e;
            for(int i = s - 1; i < e; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}