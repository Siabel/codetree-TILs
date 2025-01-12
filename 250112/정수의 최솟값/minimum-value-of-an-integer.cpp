#include <iostream>

using namespace std;

int a, b, c;

int ADD(int A, int B, int C){
    if(A < B){
        if(A < C) return A;
        else return C;
    }
    else{
        if(B < C) return B;
        else return C;
    }
}
int main() {
    cin >> a >> b >> c;

    // Write your code here!
    cout << ADD(a, b, c);

    return 0;
}