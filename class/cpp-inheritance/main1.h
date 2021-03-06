//
// Created by zhangrongxiang on 2017/10/22 22:22
// File main
//

#ifndef LEARN_CPP_MAIN1_H
#define LEARN_CPP_MAIN1_H
// 基类
#include <iostream>

using namespace std;

class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// 派生类
class Rectangle : public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

class D {
public:
    D() { cout << "D()" << endl; }

    ~D() { cout << "~D()" << endl; }

protected:
    int d;
};

class B : virtual public D {
public:
    B() { cout << "B()" << endl; }

    ~B() { cout << "~B()" << endl; }

protected:
    int b;
};

class A : virtual public D {
public:
    A() { cout << "A()" << endl; }

    ~A() { cout << "~A()" << endl; }

protected:
    int a;
};

class C : public B, public A {
public:
    C() { cout << "C()" << endl; }

    ~C() { cout << "~C()" << endl; }

protected:
    int c;
};




template <typename T>
inline T const& Max (T const& a, T const& b)
{
    return a < b ? b:a;
}

#endif //LEARN_CPP_MAIN1_H
