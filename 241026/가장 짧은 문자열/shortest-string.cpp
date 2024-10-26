#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;

    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();

    int arr[3] = {len1, len2, len3};
    int max = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(max < arr[i] - arr[j])
                max = arr[i] - arr[j];
        }
    }
    cout << max;

    return 0;
}