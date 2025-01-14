#include <iostream>

using namespace std;

int N;

int F(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;

    return F(n - 2) + n;
}

int main() {
    cin >> N;

    // Write your code here!
    cout << F(N);

    return 0;
}