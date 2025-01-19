#include <iostream>
#include <algorithm>

using namespace std;

int N;
int h[1000];
int w[1000];

class Student{
    public:
        int height, weight, number;

    Student() : height(0), weight(0), number(0) {}
    Student(int height, int weight, int number){
        this -> height = height;
        this -> weight = weight;
        this -> number = number;
    }
};

bool cmp(const Student &a, const Student &b){
    if(a.height == b.height){
        if(a.weight == b.weight){
            return a.number < b.number;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
    }

    // Write your code here!
    Student students[1000];

    for (int i = 0; i < N; i++) {
        students[i] = Student(h[i], w[i], i + 1);
    }

    sort(students, students + N, cmp);

    for(int i = 0; i < N; i++){
        cout << students[i].height << " " << students[i].weight << " " << students[i].number << "\n";
    }

    return 0;
}