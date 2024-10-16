#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);

    int arr[10];
    int e_sum = 0, t_sum = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> arr[i];
        if(i % 2 == 1)
            e_sum += arr[i];
        if(i % 3 == 2)
            t_sum += arr[i];
    }

    cout << e_sum << " " << (double)t_sum / 3;

    return 0;
}