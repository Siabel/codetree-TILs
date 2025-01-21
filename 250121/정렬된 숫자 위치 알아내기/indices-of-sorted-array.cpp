#include <iostream>
#include <algorithm>

using namespace std;

int N;
int sequence[1000];

class Number{
    public:
        int num, idx;
    
    Number(int num = 0, int idx = 0){
        this -> num = num;
        this -> idx = idx;
    }
};

bool cmp(const Number &a, const Number &b){
    if(a.num == b.num)
        return a.idx < b.idx;
    return a.num < b.num;
}

int main() {
    cin >> N;
    Number number[1000];
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        number[i] = Number(sequence[i], i);
    }

    // Write your code here!
    sort(number, number + N, cmp);
    int res[1000];
    for (int i = 0; i < N; i++) {
        res[number[i].idx] = i + 1;
    }

    for(int i = 0; i < N; i++){
        cout << res[i] << " ";
    }
    
    return 0;
}
