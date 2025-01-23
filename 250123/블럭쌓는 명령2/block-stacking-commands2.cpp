#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];
int res[100] = {};

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    // Write your code here!
    for(int i = 0; i < K; i++){
        for(int j = A[i]; j <= B[i]; j++){
            res[j]++;
        }
    }

    int max_block = 0;
    for(int i = 0; i < 100; i++){
        if(res[i] > max_block)
            max_block = res[i];
    }

    cout << max_block;

    return 0;
}