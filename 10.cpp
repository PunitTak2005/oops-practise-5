#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream sourceFile("source.txt");
    ofstream destFile("destination.txt");
    
    if (!sourceFile) {
        cout << "Error opening source file!" << endl;
        return 1;
    }
    
    if (!destFile) {
        cout << "Error opening destination file!" << endl;
        return 1;
    }
    
    string line;
    while (getline(sourceFile, line)) {
        destFile << line << endl;
    }
    
    sourceFile.close();
    destFile.close();
    
    cout << "File contents copied successfully." << endl;
    return 0;
}
