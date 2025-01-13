#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool IsSame(int n) {
    for(int i = 0; i < n2; i++)
        if(a[i + n] != b[i])
            return false;

    return true;
}

bool IsSubsequence() {
    for(int i = 0; i <= n1 - n2; i++)
        if(IsSame(i))
            return true;
    
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Write your code here!
    if(IsSubsequence())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}