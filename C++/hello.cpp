#include<iostream>
using namespace std;

int main(){
    int a[10000];
    int b = 0;
    for(int i : a){
        cout << "���շ�" << b+1 << "\t";
        b++;
    }
    cout << endl;
    //�ն����
    cout << "Hello World" << endl;
    //C++ʹ��system( ��pause ��);����ͣ�ڴ���
    // system("pause");

    return 0;
}