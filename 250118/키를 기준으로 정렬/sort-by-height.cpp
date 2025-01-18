#include <iostream>
#include <vector>
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

        User(string name, int height, int weight){
            this -> name = name;
            this -> height = height;
            this -> weight = weight;
        }
};

bool cmp(const User &a, const User &b){
    return a.height < b.height;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
    }

    // Write your code here!
    vector<User> users;
    for (int i = 0; i < n; i++) {
        users.push_back(User(name[i], height[i], weight[i]));
    }

    sort(users.begin(), users.end(), cmp);

    for(int i = 0; i < n; i++){
        cout << users[i].name << " " << users[i].height << " " << users[i].weight << "\n";
    }

    return 0;
}