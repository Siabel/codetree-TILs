#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str, target;
    cin >> str >> target;
    int target_idx = -1;

    for(int i = 0; i < str.length() - 1; i++){
        if(str.find(target) != string::npos)
            target_idx = str.find(target);
    }

    cout << target_idx;
    return 0;
}