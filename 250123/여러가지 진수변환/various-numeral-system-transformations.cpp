#include <iostream>

using namespace std;

int N, B;
int res[100] = {};
int cnt = 0;

int main() {
    cin >> N >> B;

    // Write your code here!
    while(true){
        if(N < B){
            res[cnt++] = N;
            break;
        }

        res[cnt++] = N % B;
        
        N /= B;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << res[i];
    }

    return 0;
}