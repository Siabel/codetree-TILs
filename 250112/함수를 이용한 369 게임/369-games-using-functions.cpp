#include <iostream>

using namespace std;

int a, b;

bool NumExist(int num){
    int temp = num;
    while(temp != 0){
        if((temp % 10) % 3 == 0)
            return true;
        else
            temp /= 10;
    }
    return false;
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