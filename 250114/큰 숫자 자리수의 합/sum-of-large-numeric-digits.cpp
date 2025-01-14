#include <iostream>

using namespace std;

int a, b, c;

int Add(int n){
    if(n < 10)
        return n;

    return Add(n / 10) + n % 10;
}

int main() {
    cin >> a >> b >> c;

    // Write your code here!
    cout << Add(a * b * c);

    return 0;
}