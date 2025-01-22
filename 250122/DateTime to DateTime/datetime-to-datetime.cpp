#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Write your code here!
    int startDay = 11, startHour = 11, startMin = 11;

    if (a < startDay || (a == startDay && b < startHour) || (a == startDay && b == startHour && c < startMin)) {
        cout << -1;
    }

    int totalMinStart = startDay * 24 * 60 + startHour * 60 + startMin;
    int totalMinEnd = a * 24 * 60 + b * 60 + c;

    cout << totalMinEnd - totalMinStart;

    return 0;
}