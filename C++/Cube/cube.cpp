#include<iostream>
using namespace std;

class cube
{
//����
private:
    float m_H; //��
    float m_W; //��
    float m_L; //��

//��Ϊ
public:
    //��ȡ��
    float getm_L(){
        return this->m_L;
    }
    //��ȡ��
    float getm_W(){
        return this->m_W;
    }
    //��ȡ��
    float getm_H(){
        return this->m_H;
    }
    //���ó�
    void setm_L(float m_L){
        this->m_L = m_L;
    }
    //���ÿ�
    void setm_W(float m_W){
        this->m_W = m_W;
    }
    //���ø�
    void setm_H(float m_H){
        this->m_H = m_H;
    }

    //�������������
    float calculateS(){
        return (2*m_L*m_W)+(2*m_L*m_H)+(2*m_H*m_W);
    }

    //�������������
    float calculateV(){
        return (m_H*m_L*m_W);
    }

    //��Ա����
    bool isSame(cube &c2){
    if (this->getm_H() == c2.getm_H() && this->getm_L() == c2.getm_L() && this->getm_W() == c2.getm_W())
    {
        return true;
    }else{
        return false;
    }   
}
};