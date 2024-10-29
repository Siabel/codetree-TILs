#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    bool exists_ee = false;
    bool exists_ab = false;

    for(int i = 0; i < str.length() - 2; i++){
        if(str.find("ee") != string::npos)
            exists_ee = true;
        if(str.substr(i,2) == "ab")
            exists_ab = true;
    }

    if(exists_ee == true)
        cout << "Yes ";
    else
        cout << "No ";
    
    if(exists_ab == true)
        cout << "Yes ";
    else
        cout << "No ";
    return 0;
}