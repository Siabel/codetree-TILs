#include <iostream>

using namespace std;

int n;

bool Check(int num){
    return num % 2 == 0 && (num / 10 + num % 10) % 5 == 0;
}

int main() {
    cin >> n;

    // Write your code here!
    if(Check(n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}