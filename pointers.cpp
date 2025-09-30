#include <iostream>
using namespace std;
int main() {
    int var = 20;   // actual variable declaration
    int *ptr;      // pointer variable

    ptr = &var;    // store address of var in pointer variable

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr (Address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    //update value using pointer
    *ptr = 30;
    cout << "New value of var: " << var << endl;

    // reference variable
    int &ref = var; // ref is a reference to var
    cout << "Value of ref: " << ref << endl;
    ref = 40; // update var using reference
    cout << "New value of var after updating ref: " << var << endl;
    

    return 0;
}