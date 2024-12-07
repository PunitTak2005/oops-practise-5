#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        throw 10; // You can replace with other types for testing
    } catch (int e) {
        cout << "Integer exception caught: " << e << endl;
    } catch (char e) {
        cout << "Character exception caught: " << e << endl;
    } catch (string e) {
        cout << "String exception caught: " << e << endl;
    }

    return 0;
}
