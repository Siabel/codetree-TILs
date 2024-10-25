#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    
    int num = 1;
    
    for (int sum = 0; sum <= n + m - 2; sum++) {
        for (int i = 0; i < n; i++) {
            int j = sum - i;
            if (j >= 0 && j < m) {
                matrix[i][j] = num++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}