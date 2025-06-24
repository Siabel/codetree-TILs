#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int t;

class Spy{
    public:
        string secret_code;
        char meeting_point;
        int time;
        
        Spy(string secret_code, char meeting_point, int time){
            this -> secret_code = secret_code;
            this -> meeting_point = meeting_point;
            this -> time = time;
        }
};

int main() {
    cin >> secret_code >> meeting_point >> t;

    // Please write your code here.
    Spy spy = Spy(secret_code, meeting_point, t);

    cout << "secret code : " << spy.secret_code << endl;
    cout << "meeting point : " << spy.meeting_point << endl;
    cout << "time : " << spy.time;

    return 0;
}