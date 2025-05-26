#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a = 10;
    int b = std::move(a);
    cout << "a: " << a << endl; 
    cout << "b: " << b << endl; 
    string x = "hello";
    string y = std::move(x);
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;
}