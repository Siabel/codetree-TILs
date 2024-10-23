#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count_arr[5] = {};
    char yn;
    int temp;

    for(int i = 0; i < 3; i++){
        cin >> yn >> temp;
        if(yn == 'Y'){
            if(temp >= 37)
                count_arr[0]++;
            else
                count_arr[2]++;
        }
        else{
            if(temp >= 37)
                count_arr[1]++;
            else
                count_arr[3]++;
        }
    }

    for(int i = 0; i < 4; i++)
        cout << count_arr[i] << " ";
    
    if(count_arr[0] >= 2)
        cout << 'E';

    return 0;
}