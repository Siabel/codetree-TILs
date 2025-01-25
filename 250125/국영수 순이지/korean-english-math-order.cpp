#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;

class Student {
public:
    string name;
    int korean, english, math;

    Student(string name = "", int korean = 0, int english = 0, int math = 0) {
        this->name = name;
        this->korean = korean;
        this->english = english;
        this->math = math;
    }
};

bool cmp(const Student &a, const Student &b) {
    if (a.korean == b.korean) {
        if (a.english == b.english) {
            return a.math > b.math; // 수학 점수가 높은 학생
        }
        return a.english < b.english; // 영어 점수가 낮은 학생
    }
    return a.korean > b.korean; // 국어 점수가 높은 학생
}

int main() {
    cin >> n;

    Student student[10];
    for (int i = 0; i < n; i++) {
        string name;
        int korean, english, math;
        cin >> name >> korean >> english >> math;
        student[i] = Student(name, korean, english, math);
    }

    sort(student, student + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << student[i].name << " " << student[i].korean << " " << student[i].english << " " << student[i].math << "\n";
    }

    return 0;
}
