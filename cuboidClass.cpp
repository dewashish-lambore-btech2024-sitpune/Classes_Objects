#include <iostream>
using namespace std;

class Box {
public:
    int h = 10;
    int w = 4;
    int l = 6;
};

int main() {
    Box obj;
    int volume = obj.h * obj.w * obj.l;
    cout << "Height: " << obj.h << endl;
    cout << "Width: " << obj.w << endl;
    cout << "Length: " << obj.l << endl;
    cout << "Volume: " << volume << endl;
    return 0;
}
