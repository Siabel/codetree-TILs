#include <iostream>

using namespace std;

int a, b;

bool IsOnjeonsu(int num){
    if(num % 2 == 0)
        return false;
    if(num % 10 == 5)
        return false;
    if(num % 3 == 0 && num % 9 != 0)
        return false;
    return true;
}

int main() {
    cin >> a >> b;

    // Write your code here!
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(IsOnjeonsu(i))
            cnt++;
    }

    cout << cnt;

    return 0;
}