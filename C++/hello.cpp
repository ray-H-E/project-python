#include<iostream>
using namespace std;

int main(){
    int a[10000];
    int b = 0;
    for(int i : a){
        cout << "夏艺峰" << b+1 << "\t";
        b++;
    }
    cout << endl;
    //终端输出
    cout << "Hello World" << endl;
    //C++使用system( “pause “);来暂停黑窗口
    // system("pause");

    return 0;
}