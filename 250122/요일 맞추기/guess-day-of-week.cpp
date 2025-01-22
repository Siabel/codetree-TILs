#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;
string yoil[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

int CalDate(int month, int day){
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int total = 0;
    for(int i = 1; i < month; i++){
        total += num_of_days[i];
    }

    total += day;

    return total;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Write your code here!
    int day_diff = CalDate(m2, d2) - CalDate(m1, d1) + 1;

    if (day_diff < 0) {
        day_diff = (day_diff % 7 + 7) % 7;
    }

    int start_day_of_week = 0;
    int target_day_of_week = (start_day_of_week + day_diff) % 7;

    cout << yoil[target_day_of_week];

    return 0;
}