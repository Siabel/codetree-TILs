#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;
    bool slide = false;

    int A[100];
    int B[100];

    for(int i = 0; i < n1; i++){
        cin >> A[i];
    }
    for(int i = 0; i < n2; i++){
        cin >> B[i];
    }

    for(int i = 0; i < n1; i++){
        int idx = -1;
        if(A[i] == B[0]){
            idx = i;
            for(int j = 0; j < n2; j++){
                if(A[idx] != B[j])
                    break;
                if(j == n2 - 1)
                    slide = true;
                idx++;
            }
        }
    }

    if(slide)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}