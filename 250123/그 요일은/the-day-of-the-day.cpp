#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;
string yoil[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

int CalDate(int month, int day){
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int total = 0;
    for(int i = 1; i < month; i++){
        total += num_of_days[i];
    }

    total += day;

    return total;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    // Write your code here!
    int day_diff = CalDate(m2, d2) - CalDate(m1, d1) + 1;
    
    if(day_diff % 7 != 0)
        cout << day_diff / 7 + 1;
    else
        cout << day_diff;


    return 0;
}