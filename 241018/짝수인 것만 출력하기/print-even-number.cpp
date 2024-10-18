#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int new_arr[100];
  	int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
    	if(arr[i] % 2 == 0)
        	new_arr[cnt++] = arr[i];
    }

    for(int i = 0; i < cnt; i++)
    	cout << new_arr[i] << " ";
        
    return 0;
}