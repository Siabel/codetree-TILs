#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your code here!
    int cnt = 0;
    int res = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] > t){
            cnt++;
        }
        else{
            if(res < cnt)
                res = cnt;
            cnt = 0;
        }
    }

    cout << res;

    return 0;
}
