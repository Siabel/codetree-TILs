#include <iostream>

using namespace std;

void PrintStars(){
    for(int i = 0; i < 10; i++){
        cout << "*";
    }
}
int main() {
    // Write your code here!
    for(int i = 0; i < 5; i++){
        PrintStars();
        cout << "\n";
    }
    return 0;
}