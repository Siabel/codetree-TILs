#include <iostream>

using namespace std;

int a, b;

bool NumExist(int num){
    while(true){
        if(num == 0)
            return false;
        if((num % 10) % 3 == 0)
            return true;
        else
            num /= 10;
    }
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
    }

    cout << cnt;

    return 0;
}