#include <iostream>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class User{
    public:
        string name;
        int height, weight;

    User() : name(""), height(0), weight(0) {}
    User(string name, int height, int weight){
        this -> name = name;
        this -> height = height;
        this -> weight = weight;
    }
};

bool cmp(const User &a, const User &b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
    }

    // Write your code here!
    User users[n];

    for(int i = 0; i < n; i++){
        users[i] = User(name[i], height[i], weight[i]);
    }

    sort(users, users + n, cmp);

    for(int i = 0; i < n; i++){
        cout << users[i].name << " " << users[i].height << " " << users[i].weight << "\n";
    }

    return 0;
}