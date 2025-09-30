#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create and write to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, World!" << endl;
        outFile << "This is a file handling example." << endl;
        outFile.close();
    } else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Read from the file
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    return 0;
}
