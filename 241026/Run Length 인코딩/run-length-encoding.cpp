#include <iostream>
#include <string>

using namespace std;

int main() {
    string A;
    cin >> A;

    string encoded = "";
    int count = 1;

    for (size_t i = 1; i <= A.size(); i++) {
        if (i < A.size() && A[i] == A[i - 1]) {
            count++;
        } else {
            encoded += A[i - 1];
            encoded += to_string(count);
            count = 1;
        }
    }

    cout << encoded.size() << endl;
    cout << encoded << endl;

    return 0;
}