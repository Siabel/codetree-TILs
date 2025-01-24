#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int res[2001] = {};
int idx = 1000;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Write your code here!
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x[i]; j++){
            if(dir[i] == 'L'){
                res[idx--]++;
            }
            else{
                res[idx++]++;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < 2000; i++){
        if(res[i] > 1)
            cnt++;
    }

    cout << cnt;

    return 0;
}