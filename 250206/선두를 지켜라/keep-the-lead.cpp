#include <iostream>

using namespace std;

int N, M;
int v1[1000], t1[1000];
int v2[1000], t2[1000];
int res1[1000000] = {};
int res2[1000000] = {};

int distance1 = 0;
int distance2 = 0;

int cnt1 = 0, cnt2 = 0;
int change = 0;
int first = 0;

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> v1[i] >> t1[i];

    for (int i = 0; i < M; i++) cin >> v2[i] >> t2[i];

    // Write your code here!
    for(int i = 0; i < N; i++){
        distance1 += v1[i];

        while(1){
            res1[cnt1++] = distance1;
            t1[i]--;
            if(t1[i] == 0){
                break;
            }
            distance1 += v1[i];
        }
    }

    for(int i = 0; i < M; i++){
        distance2 += v2[i];

        while(1){
            res2[cnt2++] = distance2;
            t2[i]--;
            if(t2[i] == 0){
                break;
            }
            distance2 += v2[i];
        }
    }
    for(int i = 0; i < 1000000; i++){
        // cout << res1[i] << " " << res2[i]<< "\n";
        if(i == 0){
            if(res1[i] > res2[i]){
                first = 1;
            }
            else if(res1[i] < res2[i]){
                first = 2;
            }
        }
        else{
            if(res1[i] > res2[i] && first == 2){
                first = 1;
                change++;
            }
            else if(res1[i] < res2[i] && first == 1){
                first = 2;
                change++;
            }
        }
    }

    cout << change;

    return 0;
}