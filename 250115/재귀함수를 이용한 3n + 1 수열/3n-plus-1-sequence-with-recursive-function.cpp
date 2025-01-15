#include <iostream>

using namespace std;

int n;

int Calculate(int num){
    if(num == 1)
        return 0;

    if(num % 2 == 0)
        return Calculate(num / 2) + 1;
    else
        return Calculate(num * 3 + 1) + 1;
}

int main() {
    cin >> n;

    // Write your code here!
    cout << Calculate(n);
    return 0;
}