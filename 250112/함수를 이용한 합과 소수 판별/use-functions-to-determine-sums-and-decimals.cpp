#include <iostream>

using namespace std;

int a, b;

bool IsPrime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0)
            return false;
    }
    return true;    
}

bool AddAllnum(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }

    return sum % 2 == 0;
}

bool Check(int num){
    return IsPrime(num) && AddAllnum(num);
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