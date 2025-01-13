#include <iostream>

using namespace std;

int M, D;

int MonthCheck(int month){
    if(month == 2)
        return 28;
    else if(month < 8){
        if(month % 2 == 0)
            return 30;
        else
            return 31;
    }
    else{
        if(month % 2 == 0)
            return 31;
        else
            return 30;
    }
}

bool IsExist(int m, int d){
    if(d > 31 || m > 12)
        return false;
    
    if(MonthCheck(m) >= d)
        return true;
    else
        return false;
}

int main() {
    cin >> M >> D;

    // Write your code here!
    if(IsExist(M, D))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}