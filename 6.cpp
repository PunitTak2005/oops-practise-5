#include <iostream>
using namespace std;

// Template class Pair with two type parameters
template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    
    void display() {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};

int main() {
    Pair<int, string> p1(1, "One");
    p1.display();
    
    Pair<double, char> p2(3.14, 'A');
    p2.display();
    
    return 0;
}
