#include<iostream>
using namespace std;

//定义宏常量
#define Day 7

int main(){
    cout << "Day: " << Day << endl;
    //定义变量
    int day = 7;
    cout << "day: " << day << endl;

    //const名叫常量限定符，用来限定特定变量，以通知编译器该变量是不可修改的
    const int month = 12;
    cout << "month: " << month << endl;

    //为常量指针时，不可以通过修改所指向的变量的值，但是指针可以指向别的变量。
    const int *p = &day;
    cout << "p: " << *p << endl;
    p = &month;
    cout << "p: " << *p << endl;

    //为指针常量时，指针常量的值不可以修改，就是不能指向别的变量，但是可以通过指针修改它所指向的变量的值。
    int *const m = &day;
    *m = 20;
    cout << "day: " << day << endl;

    return 0;
}