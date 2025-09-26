#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    // // Arithmetic Operators
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "b / a = " << b / a << endl; // Division
    cout << "b % a = " << b % a << endl; // Modulus
    cout << "++a = " << ++a << endl;     // Pre-increment
    cout << "--a = " << --a << endl;     // pre-decrement
    cout << "a++ = " << a++ << endl;     // post-increment
    cout << "a-- = " << a-- << endl;     // post-decrement

    // relational operator
    cout << "a == b: " << (a == b) << endl; // equal to
    cout << "a != b: " << (a != b) << endl; // not equal to
    cout << "a > b: " << (a > b) << endl;   // greater than
    cout << "a < b: " << (a < b) << endl;   // less than
    cout << "a >= b: " << (a >= b) << endl; // greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // less than or equal to

    // logical operator
    cout << "(a && b): " << (a && b) << endl; // logical AND
    cout << "(a || b): " << (a || b) << endl; // logical OR
    cout << "(!a): " << (!a) << endl;         // logical NOT

    // bitwise operator
    cout << "(a & b): " << (a & b) << endl;   // bitwise AND
    cout << "(a | b): " << (a | b) << endl;   // bitwise OR
    cout << "(a ^ b): " << (a ^ b) << endl;   // bitwise XOR
    cout << "(~a): " << (~a) << endl;         // bitwise NOT
    cout << "(a << 1): " << (a << 1) << endl; // left shift
    cout << "(a >> 1): " << (a >> 1) << endl; // right shift

    // assignment operator
    int c = a; // assignment
    cout << "c = a: " << c << endl;
    c += a; // c = c + a
    cout << "c += a: " << c << endl;
    c -= a; // c = c - a
    cout << "c -= a: " << c << endl;
    c *= a; // c = c * a
    cout << "c *= a: " << c << endl;
    c /= a; // c = c / a
    cout << "c /= a: " << c << endl;

    // ternary / conditional operator
    int max = (a > b) ? a : b;
    cout << "max = (a > b) ? a : b: is " << max << endl;

    sizeof(char);
    int n = (a + 1, a - 2, a + 5);
    int p, q, r;

    return 0;
}