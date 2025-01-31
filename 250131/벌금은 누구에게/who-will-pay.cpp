#include <iostream>

using namespace std;

int N, M, K;
int student[10000];
int bulchik[10000];

int main() {
    cin >> N >> M >> K;

    for (int i = 0; i < M; i++) {
        cin >> student[i];
    }

    // Write your code here!
    int target = -1;
    for(int i = 0; i < M; i++){
        bulchik[student[i]]++;
        
        if(bulchik[student[i]] >= K){
            target = student[i];
            break;
        }
    }

    cout << target;

    return 0;
}