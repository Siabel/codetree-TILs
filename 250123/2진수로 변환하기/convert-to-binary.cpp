#include <iostream>

using namespace std;

int n;
int digits[20];
int cnt = 0;

int main() {
    cin >> n;

    // Write your code here!
    while(true){
        if(n < 2){
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n % 2;
        n /= 2;        
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << digits[i];
    }

    return 0;
}