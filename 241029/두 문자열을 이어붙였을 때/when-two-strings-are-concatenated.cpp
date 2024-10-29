#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b;
    string n_a = "", n_b = "";
    cin >> a >> b;

    n_a = a + b;
    n_b = b + a;

    if(n_a == n_b)
        cout << "true";
    else
        cout << "false";

    return 0;
}