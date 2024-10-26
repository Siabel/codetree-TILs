#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1;
    string str2;

    cin >> str1 >> str2;

    int sum = 0;
    sum = str1.length() + str2.length();

    cout << sum;

    return 0;
}