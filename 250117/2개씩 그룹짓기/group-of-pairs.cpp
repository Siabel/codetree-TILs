#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    // Write your code here!
    sort(nums, nums + (2 * N));

    int max = 0;

    for(int i = 0; i < N; i++){
        int temp = nums[i] + nums[2 * N - i - 1];
        
        if(temp > max)
            max = temp;
    }

    cout << max;

    return 0;
}
