#include<iostream>
using namespace std;

#include"cube.cpp"


//ȫ�ֺ���
bool isSame(cube &c1, cube &c2){
    if (c1.getm_H() == c2.getm_H() && c1.getm_L() == c2.getm_L() && c1.getm_W() == c2.getm_W())
    {
        return true;
    }else{
        return false;
    }   
}

int main(){
    cube cb;
    cb.setm_H(10);
    cb.setm_L(10);
    cb.setm_W(10);

    cout << "���������Ϊ��"<< cb.calculateS() << endl;
    cout << "���������Ϊ��"<< cb.calculateV() << endl;

    cube cb2;
    cb2.setm_H(10);
    cb2.setm_L(10);
    cb2.setm_W(10);

    bool ret = cb.isSame(cb2);
    if (ret)
    {
        cout << "���" << endl;
    }else{
        cout << "�����" << endl;
    }


    
    return 0;
}