#include <iostream>
using namespace std;

class Box {
public:
    int h, w, l;

    void readData() {
        cout << "Enter height: ";
        cin >> h;
        cout << "Enter width: ";
        cin >> w;
        cout << "Enter length: ";
        cin >> l;
    }

    int getVolume() {
        return h * w * l;
    }

    void showVolume() {
        cout << "Volume: " << getVolume();
    }
};

int main() {
    Box b;
    b.readData();
    b.showVolume();
    return 0;
}
