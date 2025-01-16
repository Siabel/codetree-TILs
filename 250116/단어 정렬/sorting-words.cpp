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
    sort(word.begin(), word.end());

    for (int i = 0; i < n; i++) {
        cout << word[i] < " ";
    }

    return 0;
}