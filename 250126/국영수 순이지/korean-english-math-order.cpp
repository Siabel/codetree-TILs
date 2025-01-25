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
            return a.math > b.math;
        }
        return a.english > b.english;
    }
    return a.korean > b.korean;
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
