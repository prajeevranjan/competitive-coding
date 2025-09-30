#include <iostream>
using namespace std;

// Template function to return maximum of two values
template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

// class template example (not used in main)
template <typename T> class Geek
{
  public:
    T x;
    T y;

    // Constructor
    Geek(T val1, T val2) : x(val1), y(val2)
    {
    }

    // Method to get values
    void getValues()
    {
        cout << x << " " << y;
    }
};


// template variable example (not used in main)
// Template variable with constexpr
template <typename T> constexpr T pi = T(3.14159);

int main()
{

    // Using myMax
    cout << "Max of 3 and 7 is: " << myMax<int>(3, 7) << endl;
    cout << "Max of 3.5 and 7.5 is :" << myMax<double>(3.5, 7.5) << endl;
    cout << "Max of 'g' and 'e' is: " << myMax<char>('g', 'e') << endl;

    return 0;
}