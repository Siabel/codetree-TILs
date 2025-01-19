#include <iostream>
#include <algorithm>

using namespace std;

string name[5];
int height[5];
double weight[5];


class User{
    public:
        string name;
        int height;
        double weight;

    User() : name(""), height(0), weight(0) {}
    User(string name, int height, double weight){
        this -> name = name;
        this -> height = height;
        this -> weight = weight;
    }
};

bool cmp_name(const User &a, const User &b){
    return a.name < b.name;
}

bool cmp_height(const User &a, const User &b){
    return a.height > b.height;
}

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
    }

    // Write your code here!
    
    cout << fixed;
    cout.precision(1);

    User users[5];
    for (int i = 0; i < 5; i++) {
        users[i] = User(name[i], height[i], weight[i]);
    }

    sort(users, users + 5, cmp_name);
    cout << "name" << "\n";

    for(int i = 0; i < 5; i++){
        cout << users[i].name << " " << users[i].height << " " << users[i].weight << "\n";
    }

    sort(users, users + 5, cmp_height);
    cout << "\n" << "height" << "\n";

    for(int i = 0; i < 5; i++){
        cout << users[i].name << " " << users[i].height << " " << users[i].weight << "\n";
    }
    return 0;
}