#include <bits/stdc++.h>
using namespace std;

// class A {
// public:
//     A(int i) : i(i) {
//         if(i == 1)
//          throw 1;
//     }

//     ~A() {
//         cout << i;
//     }
// private:
//     int i;
// };

// int main(){
//     try{
//         A a(0);
//         A b(1);
//         A c(2);
//     }
//     catch(...){
//         cout << 3;
//     }
//     cout << endl;
// }


// class A{
// public:
//     A(int i) {
//         x = i;
//     }
//     void printa(int x){
//         cout << this->x << endl;
//         cout << x << endl;
//     }
// private:
//     int x;
// };

// class B : public A{
// public:
//     B(int i) : A(i + 10) {
//         x = i;
//     }
//     void printb(int x){
//         cout << this->x + 2 << endl;
//     }
// private:
//     int x;
// };
// int main(){
//     B b(2);
//     b.printa(5);
//     b.printb(10);
//     return 0;
// }

// class Shape{
// public:
//     void print(){
//         cout << "Shape!" << endl;
//     }
// };

// class Rect : public Shape{
// public:
//     void print() {
//         cout << "Rect!" << endl;
//     }

// };


// int main(){
//     Rect *r = new Rect();
//     Rect &s = *r;
//     r->print();
//     s.print();
//     Shape t = Shape();
//     t.print();
//     return 0;
// }

// class Integer{
// public:
//     Integer(int integer){
//         i = integer;
//     }
//     Integer (const Integer& integer){
//         i = integer.i;
//     }
//     Integer operator++(){
//         ++i;
//         return *this;
//     }
//     Integer operator++(int){
//         Integer old(*this);
//         ++i;
//         return old;
//     }
//     Integer operator+=(int integer){
//         i += integer;
//         return *this;
//     }
//     int get(){
//         return i;
//     }
// private:
//     int i;
// };
// int main(){
//     Integer i(8);
//     cout << (i++).get() << endl;
//     cout << (++i).get() << endl;

//     int j = -6;
//     cout << (++(i += j)).get() << endl;
// }

// void process(int x, int &y){
//     x++;
//     y++;
// }
// void print(int &x){
//     x *= 2;
//     cout << x << endl;
// }
// void print(const int &x){
//     cout << x << endl;
// }

// int main(){
//     int a = 5, b = 10;
//     const int c = 15;
//     process(a, b);
//     print(a);
//     print(b + 1);
//     print(c);
//     return 0;
// }


template<class T>
class Point{
public:
    Point operator+=(T z);
private:
    T x;
    T y;
};

template<class T>
Point<T> Point<T>::operator+=(T z){
    x += z;
}
// 2 5 4 x
// INTEGER
// 03
// print(a), print(b+1), print(c)
// rect!rect!shape!


// shape<T>& 

