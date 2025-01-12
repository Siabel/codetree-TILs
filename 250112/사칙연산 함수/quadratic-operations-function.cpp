#include <iostream>

using namespace std;

int a;
int c;
char o;

int Division(int x, int y){
    return x / y;
}

int Add(int x, int y){
    return x + y;
}

int Subtraction(int x, int y){
    return x - y;
}

int Multiple(int x, int y){
    return x * y;
}

int main() {
    cin >> a >> o >> c;

    // Write your code here!
    if(o == '+')
        cout << a << " " << o << " " << c << " " << "=" << " " << Add(a, c);
    else if(o == '-')
        cout << a << " " << o << " " << c << " " << "=" << " " << Subtraction(a, c);
    else if(o == '*')
        cout << a << " " << o << " " << c << " " << "=" << " " << Multiple(a, c);
    else if(o == '/')
        cout << a << " " << o << " " << c << " " << "=" << " " << Division(a, c);
    else
        cout << "False";

    return 0;
}