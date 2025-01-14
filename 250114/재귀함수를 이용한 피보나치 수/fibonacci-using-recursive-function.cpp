#include <iostream>

using namespace std;

int N;

int Fibo(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 1;

    return Fibo(n - 2) + Fibo(n - 1);
}

int main() {
    cin >> N;

    // Write your code here!
    cout << Fibo(N);

    return 0;
}