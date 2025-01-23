#include <iostream>
#include <string>

using namespace std;

string N;
int binary[100] = {};

int main() {
    cin >> N;

    int num = 0;
    int cnt = 0;

    // Write your code here!
    for(int i = 0; i < N.length(); i++){
        num = num * 2 + (N[i] - '0');
    }

    num *= 17;

    while(true){
        if(num < 2){
            binary[cnt++] = num;
            break;
        }
        
        binary[cnt++] = num % 2;
        num /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << binary[i];
    }

    return 0;
}