#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    for(int i = 1; i <= 9; i++){
        for(int j = b; j >= a; j--){
            if(j == a)
                cout << j << " * " << i << " = " << i * j;
            else if(j % 2 == 0)
                cout << j << " * " << i << " = " << i * j << " / ";
        }
        cout << endl;
    }
    return 0;
}