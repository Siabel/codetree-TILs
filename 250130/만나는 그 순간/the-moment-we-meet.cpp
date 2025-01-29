#include <iostream>
#define MAX 1000
using namespace std;

int n, m;
char A_d[MAX];
int A_t[MAX];
char B_d[MAX];
int B_t[MAX];

int A_rec[MAX * MAX * 2];
int B_rec[MAX * MAX * 2];

int A_idx = MAX * MAX;
int B_idx = MAX * MAX;
int A_cnt = 0;
int B_cnt = 0;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> A_d[i] >> A_t[i];

        if(A_d[i] == 'L'){
            for(int j = 0; j < A_t[i]; j++){
                A_idx--;
                A_rec[A_cnt] = A_idx;
                A_cnt++;
            }
        }
        else{
            for(int j = 0; j < A_t[i]; j++){
                A_idx++;
                A_rec[A_cnt] = A_idx;
                A_cnt++;
            }
        }
    } 

    for (int i = 0; i < m; i++){
        cin >> B_d[i] >> B_t[i];
        
        if(B_d[i] == 'L'){
            for(int j = 0; j < B_t[i]; j++){
                B_idx--;
                B_rec[B_cnt] = B_idx;
                B_cnt++;
            }
        }
        else{
            for(int j = 0; j < B_t[i]; j++){
                B_idx++;
                B_rec[B_cnt] = B_idx;
                B_cnt++;
            }
        }
    }

    int time = 0;
    bool meet = false;

    for(int i = 0; i < 2 * MAX * MAX; i++){
        time++;
        if(A_rec[i] == B_rec[i]){
            meet = true;
            break;
        }
    }

    if(meet)
        cout << time;
    else
        cout << -1;

    return 0;
}