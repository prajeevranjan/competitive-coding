#include <iostream>
using namespace std;

int main(){
    int a = 10;
    bool b = true;
    char c = 'A';
    float d = 10.5;
    double e = 20.99;
    cout << "Integer: " << a << endl;
    cout << "Boolean: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Float: " << d << endl;
    cout << "Double: " << e << endl;

    // type safety
    bool bl = 34.84;
    cout << "Boolean from float: " << bl << endl;

    // data type conversion
    int n = 3;
    char ch = 'a';
    cout << "Character + Integer: " << ch + n << endl; // ASCII value
    cout << "Character + Integer (as char): " << char(ch + n) << endl; // ASCII value as char

    // size of data types
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    // data type modifiers
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;   

    return 0;
}