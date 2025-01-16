#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1;
string word2;

int main() {
    cin >> word1;
    cin >> word2;

    // Write your code here!
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    bool check = true;

    for(int i = 0; i < 100001; i++){
        if(word1[i] != word2[i])
            check = false;
            break;        
    }

    if(check && word1.length() == word2.length())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
