#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Display header with aligned columns
    cout << left << setw(10) << "Name" << setw(10) << "Age" << setw(10) << "Score" << endl;

    // Draw a separator line
    cout << setfill('-') << setw(30) << "-" << endl;

    // Reset fill character to space
    cout << setfill(' ');

    // Display first row of data
    cout << left << setw(10) << "Alice" << setw(10) << 22 << setw(10) << fixed << setprecision(2) << 90.5 << endl;

    // Display second row of data
    cout << left << setw(10) << "Bob" << setw(10) << 21 << setw(10) << 85.3 << endl;

    return 0;
}
