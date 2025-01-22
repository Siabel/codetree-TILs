#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];

class Student{
    public:
        int height, weight, number;

    Student(int height = 0, int weight = 0, int number = 0){
        this -> height = height;
        this -> weight = weight;
        this -> number = number;
    }
};

bool cmp(const Student &a, const Student &b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    cin >> N;

    Student student[1000];
    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        student[i] = Student(h[i], w[i], i + 1);
    }

    // Write your code here!
    sort(student, student + N, cmp);

    for(int i = 0; i < N; i++){
        cout << student[i].height << " " << student[i].weight << " " << student[i].number << "\n";
    }

    return 0;
}