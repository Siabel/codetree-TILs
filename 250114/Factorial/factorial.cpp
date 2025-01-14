#include <iostream>

using namespace std;

int N;

int Fact(int n){
    if(n == 1)
        return 1;

    return Fact(n - 1) * n;
}

int main() {
    cin >> N;

    // Write your code here!
    cout << Fact(N);
    return 0;
}