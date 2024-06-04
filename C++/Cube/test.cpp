#include<iostream>
using namespace std;

#include"cube.cpp"


//全局函数
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

    cout << "立方体面积为："<< cb.calculateS() << endl;
    cout << "立方体体积为："<< cb.calculateV() << endl;

    cube cb2;
    cb2.setm_H(10);
    cb2.setm_L(10);
    cb2.setm_W(10);

    bool ret = cb.isSame(cb2);
    if (ret)
    {
        cout << "相等" << endl;
    }else{
        cout << "不相等" << endl;
    }


    
    return 0;
}