#include <iostream>
using namespace std;

// Template class Box with attributes for length, width, and height
template <typename T>
class Box {
    T length, width, height;
public:
    Box(T l, T w, T h) : length(l), width(w), height(h) {}
    
    T getVolume() {
        return length * width * height;
    }
    
    void display() {
        cout << "Volume: " << getVolume() << endl;
    }
};

int main() {
    Box<int> intBox(2, 3, 4);
    intBox.display();
    
    Box<double> doubleBox(2.5, 3.1, 4.0);
    doubleBox.display();
    
    return 0;
}
