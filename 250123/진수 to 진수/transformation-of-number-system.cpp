#include <iostream>

using namespace std;

int a, b;
string n;
int num = 0;
int res[100] = {};
int cnt = 0;

int main() {
    cin >> a >> b;
    cin >> n;

    // Write your code here!
    for(int i = 0; i < n.length(); i++){
        num = num * a + (n[i] - '0');
    }

    while(true){
        if(num < b){
            res[cnt++] = num;
            break;
        }

        res[cnt++] = num % b;
        num /= b;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << res[i];
    }
    return 0;
}