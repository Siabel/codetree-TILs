#include <iostream>

using namespace std;

int n;

void PrintStar(int cnt){
    if(cnt == 0)
        return;
    PrintStar(cnt - 1);
    for(int i = 0; i < cnt; i++){
        cout << "*";
    }
    cout << "\n";
}

int main() {
    cin >> n;

    // Write your code here!
    PrintStar(n);

    return 0;
}