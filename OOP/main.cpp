#include <iostream>
using namespace std;

class base {
public:
    base() {
        int *b = new int[5];
        cout << "base constructor" << endl;
        
    }
    virtual ~base() {
        delete[] b;
        cout << "base destructor" << endl;
        
    }

private:
    int *b;
};

class derived : public base {
public:
    derived() {
        int *d = new int[8];
        cout << "derived constructor" << endl;
    }
    ~derived() {
        delete[] d;
        cout << "derived destructor" << endl;
    }

private:
    int *d;
};

int main()
{
    base *pBase = new derived;
    cout << "---" << endl;
    delete pBase;

    return 0;
}