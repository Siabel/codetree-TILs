#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Write your code here!
    int cnt = 0;
    int res = 0;
    for(int i = 0; i < N; i++){
        if(i == 0 || arr[i] != arr[i + 1]){
            cnt++;
        }
        else{
            if(res < cnt)
                res = cnt;
            cnt = 1;
        }
    }

    cout << cnt;

    return 0;
}