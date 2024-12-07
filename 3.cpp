
#include <iostream> 
#include <cmath> 
using namespace std; 
 
class NegativeNumberException {}; 
 
double calculateSquareRoot(double num) { 
    if (num < 0) 
        throw NegativeNumberException(); 
    return sqrt(num); 
} 
 
int main() { 
    double number; 
    cout << "Enter a number: "; 
    cin >> number; 
 
    try { 
        cout << "Square root: " << calculateSquareRoot(number) << endl; 
    } catch (NegativeNumberException) { 
        cout << "Exception: Cannot calculate square root of a negative number!" << endl; 
    } 
 
    return 0; 
}
