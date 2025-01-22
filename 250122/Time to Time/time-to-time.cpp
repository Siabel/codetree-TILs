#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Write your code here!
    int cur_time = a * 60 + b;
    int fut_time = c * 60 + d;

    cout << fut_time - cur_time;

    return 0;
}