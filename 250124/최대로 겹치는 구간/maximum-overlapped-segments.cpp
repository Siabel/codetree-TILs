#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int res[201] = {};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        x1[i] += 100;
        x2[i] += 100;
    }

    // Write your code here!
    for(int i = 0; i < n; i++){
        for(int j = x1[i]; j <= x2[i]; j++){
            res[j]++;
        }
    }

    int max = 0;
    for(int i = 0; i < 201; i++){
        if(max < res[i])
            max = res[i];
    }

    cout << max;

    return 0;
}