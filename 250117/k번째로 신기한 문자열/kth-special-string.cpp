#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // Write your code here!
    sort(str, str + n);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i].find(t) == 0) {
            cnt++;
            if (cnt == k) {
                cout << str[i] << endl;
                break;
            }
        }
    }
    return 0;
}