#include <iostream>
#include <algorithm>

using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Write your code here!
    sort(A, A + n);
    sort(B, B + n);
    
    bool check = true;

    for(int j = 0; j < n; j++){
        if(A[j] != B[j]){
            check = false;
            break;
        }
    }

    if(check)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}