#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int N;
int x[1000];
int y[1000];

class Coordinate {
public:
    int X, Y, num;

    Coordinate(int X = 0, int Y = 0, int num = 0) {
        this -> X = X;
        this -> Y = Y;
        this -> num = num + 1;
    }

    int manhattanDistance() const {
        return abs(X) + abs(Y);
    }
};

bool cmp(const Coordinate &a, const Coordinate &b) {
    int distanceA = a.manhattanDistance();
    int distanceB = b.manhattanDistance();

    if (distanceA == distanceB) {
        return a.num < b.num;
    }
    return distanceA < distanceB;
}

int main() {
    cin >> N;

    Coordinate coords[1000];
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        coords[i] = Coordinate(x[i], y[i], i);
    }

    sort(coords, coords + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << coords[i].num << endl;
    }

    return 0;
}
