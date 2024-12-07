#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    ifstream file("example.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int lineCount = 0, wordCount = 0;
    string line;

    while (getline(file, line)) {
        lineCount++;
        stringstream ss(line);
        string word;

        while (ss >> word) {
            wordCount++;
        }
    }

    file.close();
    cout << "Lines: " << lineCount << ", Words: " << wordCount << endl;

    return 0;
}
