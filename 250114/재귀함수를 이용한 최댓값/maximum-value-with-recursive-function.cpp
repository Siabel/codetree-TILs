#include <iostream>

using namespace std;

int n;
int arr[100];

int FindMax(int idx){
    if(idx == -1)
        return 0;

    int cur_max = FindMax(idx - 1);

    if(cur_max > arr[idx])
        return cur_max;
    else
        return arr[idx];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your code here!
    cout << FindMax(n);

    return 0;
}