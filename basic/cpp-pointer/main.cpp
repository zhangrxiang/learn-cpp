//
// Created by zhangrongxiang on 2017/10/21 22:37
// File main
//

#include <iostream>

using namespace std;

int main() {
    int var1;
    char var2[10];

    cout << "var1 变量的地址： " << &var1  << endl;
    cout << "---------------------------------" << endl;
    cout << "var2 变量的地址： " << &var2 << endl;

    int  var = 20;   // 实际变量的声明
    int  *ip;        // 指针变量的声明
    ip = &var;       // 在指针变量中存储 var 的地址
    cout << "Value of var variable: ";
    cout << var << endl;
    // 输出在指针变量中存储的地址
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    int  *ptr = NULL;
    cout << "ptr 的值是 " << ptr << endl ;
    if (!ptr){
        cout << " null "<< endl;
    }

    return 0;
}