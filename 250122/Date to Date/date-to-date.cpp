#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Write your code here!
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cur_date = 0;
    int fut_date = 0;

    for(int i = 1; i <= m1; i++){
        cur_date += num_of_days[i];
    }

    for(int i = 1; i <= m2; i++){
        fut_date += num_of_days[i];
    }

    cur_date += d1;
    fut_date += d2;

    if(fut_date - cur_date == 0)
        cout << 1;
    else
        cout << fut_date - cur_date;

    return 0;
}