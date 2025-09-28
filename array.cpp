#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};

    // accessing array elements
    cout << arr[3] << endl;

    // array update
    cout << arr[1] << endl;
    arr[1] = 22;
    cout << arr[1] << endl;

    // size of array
    int n = sizeof(arr);
    cout << n << endl;

    // Traversing and printing arr
    for ( int i = 0; i<5; i++){
        cout << arr[i] << endl;
    }

    return 0;

}