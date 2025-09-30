#include <iostream>
#include <memory> // for std::unique_ptr
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
    
    // dynamic memory allocation using new
    int *dynPtr = new int; // allocate memory for an integer
    *dynPtr = 50; // assign value to allocated memory
    cout << "Value pointed to by dynPtr: " << *dynPtr << endl;

    // deallocate memory using delete
    delete dynPtr; // free the allocated memory
    dynPtr = nullptr; // avoid dangling pointer
    cout << "New value of var: " << var << endl;

    return 0;
}