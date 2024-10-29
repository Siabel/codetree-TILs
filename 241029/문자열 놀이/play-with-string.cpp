#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q, vaginal;
    cin >> s >> q;

    for(int i = 0; i < q; i++){
        cin >> vaginal;
        if(vaginal == 1){
            int a, b;
            cin >> a >> b;

            char temp;
            temp = s[a - 1];
            s[a - 1] = s[b - 1];
            s[b - 1] = temp;
        }
        else{
            char a, b;
            cin >> a >> b;

            for(int i = 0; i < s.length(); i++){
                if(s[i] == a)
                    s[i] = b;
            }
        }
        cout << s << endl;
    }

    return 0;
}