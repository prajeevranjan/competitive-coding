#include <iostream>
using namespace std;

// Structure definition
struct Point {
    int x;
    int y;
};

// Union definition
union Data {
    int i;
    float f;
};

int main() {
    // Using structure
    Point p1;
    p1.x = 10;
    p1.y = 20;
    cout << "Structure Point: (" << p1.x << ", " << p1.y << ")" << endl;

    // Using union
    Data data;
    data.i = 10;
    cout << "Union Data as int: " << data.i << endl;

    data.f = 220.5;
    cout << "Union Data as float: " << data.f << endl;

    // enumeration definition
    enum Color { RED, GREEN, BLUE }; // RED=0, GREEN=1, BLUE=2
    Color c = GREEN;
    cout << "Enum Color: " << c << endl;

    return 0;
}