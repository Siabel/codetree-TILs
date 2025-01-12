#include <iostream>

using namespace std;

int a, b;

bool NumExist(int num){
    return (num / 10) % 3 == 0 || (num % 10) % 3 == 0;
}

bool Check(int check_num){
    return check_num % 3 == 0 || NumExist(check_num);
}


int main() {
    cin >> a >> b;

    // Write your code here!
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(Check(i))
            cnt++;
        else
            continue;
    }

    cout << cnt;

    return 0;
}