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
int main() {
    cin >> a >> b;

    // Write your code here!
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(IsPrime(i))
            sum += i;
    }

    cout << sum;
    
    return 0;
}