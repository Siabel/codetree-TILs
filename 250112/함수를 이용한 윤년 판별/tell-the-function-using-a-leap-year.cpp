#include <iostream>

using namespace std;

int y;

bool IsLeapYear(int year){
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 != 0)
                return false;
            return true;
        }
        return true;
    }
    return false;
}
int main() {
    cin >> y;

    // Write your code here!
    if(IsLeapYear(y))
        cout << "true";
    else
        cout << "false";

    return 0;
}