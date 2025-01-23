#include <iostream>
#include <string>

using namespace std;

char binary[9] = {};
int num = 0;

int main() {
    cin >> binary;

    // Write your code here!
    int temp = 0;
    for(int i = 0; i < 9; i++){
        if(binary[i] == '1' || binary[i] == '0'){
            temp = binary[i] - '0';
            num = num * 2 + temp;
        }
    }

    cout << num;

    return 0;
}