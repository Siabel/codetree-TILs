#include <iostream>

using namespace std;

int N;

int ADD(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    return sum / 10;
}
int main() {
    cin >> N;

    // Write your code here!

    cout << ADD(N);

    return 0;
}