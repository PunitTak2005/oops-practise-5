#include <iostream>
#include <limits> // Include the limits header for numeric_limits
using namespace std;

int main() {
    int num;
    while (true) {
        cout << "Enter an integer: ";
        if (!(cin >> num)) { // Check if input is not an integer
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter an integer." << endl;
        } else {
            cout << "You entered: " << num << endl;
            break;
        }
    }

    return 0;
}
