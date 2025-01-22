#include <iostream>
#include <string>
using namespace std;

int mon(int a){
    if(a==2) return 29;
    if(a==1 or a==3 or a==5 or a==7 or a==8 or a==10 or a==12) return 31;
    return 30;
}

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int day =0;
    int cnt =0;
    string days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    string date;
    cin>>date;
    while(!(a==c and b==d)){
        day++;
        b++;
        if(b>mon(a)){
            a++;
            b=1;
        }
        if(date == days[day%7]){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}