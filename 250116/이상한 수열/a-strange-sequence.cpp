#include <iostream>

using namespace std;

int N;

int solve(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    return solve(n / 3) + solve(n - 1);
}

int main() {
    cin >> N;

    // Write your code here!
    cout << solve(N);

    return 0;
}