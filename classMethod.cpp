#include <iostream>
using namespace std;

class Box {
public:
    int h = 10;
    int w = 4;
    int l = 6;

    int calcVolume() {
        return h * w * l;
    }
};

int main() {
    Box b;
    int directVol = b.h * b.w * b.l;
    cout << "Height: " << b.h << endl;
    cout << "Width: " << b.w << endl;
    cout << "Length: " << b.l << endl;
    cout << "Volume (calculated directly): " << directVol << endl;
    cout << "Volume (via method): " << b.calcVolume() << endl;
    return 0;
}
