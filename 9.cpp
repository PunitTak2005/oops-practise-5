#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and open a file for writing
    ofstream outFile("example.txt");
    string input;

    // Prompt the user for input and write it to the file
    cout << "Enter a string to write to the file: ";
    getline(cin, input);
    outFile << input;
    outFile.close(); // Close the file after writing

    // Open the file for reading
    ifstream inFile("example.txt");
    string output;

    // Read from the file and display the contents
    cout << "Reading from file:" << endl;
    while (getline(inFile, output)) {
        cout << output << endl;
    }
    inFile.close(); // Close the file after reading

    return 0;
}
