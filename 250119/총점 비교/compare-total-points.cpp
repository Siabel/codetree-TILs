#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Student{
    public:
        string name;
        int score1, score2, score3;

        Student() : name(""), score1(0), score2(0), score3(0) {}
        Student(string name, int score1, int score2, int score3){
            this -> name = name;
            this -> score1 = score1;
            this -> score2 = score2;
            this -> score3 = score3;
        }
};

bool cmp(const Student &a, const Student &b){
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
    }

    // Write your code here!
    Student students[n];

    for(int i = 0; i < n; i++){
        students[i] = Student(name[i], score1[i], score2[i], score3[i]);
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].score1 << " " << students[i].score2 << " " << students[i].score3 << "\n";
    }
    return 0;
}