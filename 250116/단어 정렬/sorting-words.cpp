#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string word[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word[i];
    }

    // Write your code here!
    sort(word, word + n);

    for (int i = 0; i < n; i++) {
        cout << word[i] << "\n";
    }

    return 0;
}