#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a = 10;
    double *p;
    int *q = &a; // Pointer to int
    p = (double *)&a; // Unsafe cast from int* to double*
    cout << *p << endl;
    p = reinterpret_cast<double *>(&a); // Unsafe cast using reinterpret_cast
    cout << *p << endl;
    cout << *q << endl; // Output the value of a using int pointer
    ++q;
    cout << *q << endl;

    double b;
    memcpy(&b, &a, 8); // Unsafe copy of int to double
    cout << b << endl; // Output the value of b, which is now undefined
    return 0;
}