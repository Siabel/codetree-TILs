#include <iostream>

using namespace std;

int N;

int solve(int n){
    if(n == 1)
        return 2;
    if(n == 2)
        return 4;

    return (solve(n - 1) * solve(n - 2)) % 100;
}

int main() {
    cin >> N;

    // Write your code here!
    cout << solve(N);

    return 0;
}