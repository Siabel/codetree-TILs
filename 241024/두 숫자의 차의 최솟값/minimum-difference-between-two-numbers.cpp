#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[10];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min_div = 100;
    int current_num;

    for(int i = 0; i < n; i++){
        current_num = arr[i];
        for(int j = 0; j < n; j++){
            int current_div = 1;
            if(current_num > arr[j])
                current_div = current_num - arr[j];
            else
                current_div = arr[j] - current_num;
            
            if(current_div < min_div && current_div != 0)
                min_div = current_div;
        }
    }

    cout << min_div;

    return 0;
}