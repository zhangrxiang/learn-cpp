//
// Created by zing on 6/10/2020.
//

#include <iostream>

using namespace std;

template<class T>
class Base {
    T m;
};

//class Son:public Base  //错误，c++编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
class Son : public Base<int> //必须指定一个类型
{
};

void test01() {
    Son c;
}

//类模板继承类模板 ,可以用T2指定父类中的T类型
template<class T1, class T2>
class Son2 : public Base<T2> {
public:
    Son2() {
        cout << typeid(T1).name() << endl;
        cout << typeid(T2).name() << endl;
    }
};

void test02() {
    Son2<int, char> child1;
}


int main() {
    test01();
    test02();
    return 0;
}