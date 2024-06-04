#include<iostream>
using namespace std;

class cube
{
//属性
private:
    float m_H; //宽
    float m_W; //高
    float m_L; //长

//行为
public:
    //获取长
    float getm_L(){
        return this->m_L;
    }
    //获取宽
    float getm_W(){
        return this->m_W;
    }
    //获取高
    float getm_H(){
        return this->m_H;
    }
    //设置长
    void setm_L(float m_L){
        this->m_L = m_L;
    }
    //设置宽
    void setm_W(float m_W){
        this->m_W = m_W;
    }
    //设置高
    void setm_H(float m_H){
        this->m_H = m_H;
    }

    //计算立方体面积
    float calculateS(){
        return (2*m_L*m_W)+(2*m_L*m_H)+(2*m_H*m_W);
    }

    //计算立方体体积
    float calculateV(){
        return (m_H*m_L*m_W);
    }

    //成员函数
    bool isSame(cube &c2){
    if (this->getm_H() == c2.getm_H() && this->getm_L() == c2.getm_L() && this->getm_W() == c2.getm_W())
    {
        return true;
    }else{
        return false;
    }   
}
};