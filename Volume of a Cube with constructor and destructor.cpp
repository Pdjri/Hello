#include <iostream>
using namespace std;

class Cube {
private:
    double sideLength;

public:
    Cube(double side) {
        sideLength = side;
        cout << "Cube created with side length: " << sideLength << endl;
    }
    double volume() {
        return sideLength * sideLength * sideLength;
    }
    ~Cube() {
        cout << "Cube with side length " << sideLength << " is being destroyed." << endl;
    }
};

int main() {
    double side;
    cin >> side;

    Cube myCube(side);
    cout << "The volume of the cube is: " << myCube.volume() << endl;

    return 0;
}