#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;
string yoil[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

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
    int idx = -1;
    for(int i = 0; i < 7; i++){
        if(yoil[i] == A){
            idx = i;
            break;
        }
    }
    
    int start = CalDate(m1, d1);
    int end = CalDate(m2, d2);
    int start_week = (start - 1) % 7;

    int cnt = 0;
    for (int i = start; i <= end; i++) {
        int cur_week = (start_week + (i - start)) % 7;
        if (cur_week == idx) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}