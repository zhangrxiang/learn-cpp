//
// Created by zhangrongxiang on 2017/10/21 22:58
// File main
//
#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

void one();

void two();

void three();

int main() {
    one();
    two();
    int i = 0;
    while (i++ < 10) {
        sleep(1);
        three();
    }
}

void three() {
    time_t rawtime;
    struct tm *info;
    char buffer[80];
    time(&rawtime);
    info = localtime(&rawtime);
    strftime(buffer, 80, "%x - %I:%M:%S %p", info);
//    printf("格式化的日期 & 时间 : |%s|\n", buffer );
    cout << buffer << endl;
}

void two() {
    time_t now = time(nullptr);
    tm *pTm = localtime(&now);
    cout << "year : " << pTm->tm_year + 1900 << endl;
    cout << "month : " << pTm->tm_mon + 1 << endl;
    cout << "tm_mday : " << pTm->tm_mday << endl;
    cout << "tm_wday : " << pTm->tm_wday << endl;
    cout << "tm_yday : " << pTm->tm_yday << endl;
}

void one() {
    // 基于当前系统的当前日期/时间
    time_t now =  time(nullptr);
    // 把 now 转换为字符串形式
    char *dt = ctime(&now);
    cout << "本地日期和时间：" << dt << endl;
    // 把 now 转换为 tm 结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC 日期和时间：" << dt << endl;
}
