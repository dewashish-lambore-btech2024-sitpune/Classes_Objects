#include <iostream>

class Box {
private:
    int l, w, h;   // dimensions

public:
    // constructor with default values
    Box(int length = 6, int width = 4, int height = 10) {
        l = length;
        w = width;
        h = height;
    }

    int getVolume() const {
        return l * w * h;
    }
};

int main() {
    Box obj;   // object with default dimensions
    std::cout << "The volume of the cuboid is: " << obj.getVolume() << std::endl;
    return 0;
}
