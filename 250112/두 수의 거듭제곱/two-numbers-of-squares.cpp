#include <iostream>

using namespace std;

int a, b;

int Square(int A, int B){
    int temp = 1;
    for(int i = 0; i < B; i++){
        temp *= A;
    }
    return temp;
}

int main() {
    cin >> a >> b;

    // Write your code here!
    cout << Square(a, b);

    return 0;
}