#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char alp;
    int start_idx = -1;

    cin >> str >> alp;

    for(int i = 0; i < str.length() - 1; i++){
        if(str.find(alp) != string::npos)
            start_idx = str.find(alp);
    }

    if(start_idx == -1)
        cout << "No";
    else
        cout << start_idx;

    return 0;
}