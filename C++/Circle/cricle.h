#include<iostream>
using namespace std;
#include"point.h"

class circle
{
private:
    double m_R;//�뾶
    point m_point;//Բ��

public:
    //�жϵ���Բ֮��Ĺ�ϵ
    circle(){};
    ~circle(){};
    void isInCircle(point p);
    void setR(int m_R);
    int getR();
    void setPoint(point m_point);
    point getPoint();
};

//�жϵ���Բ֮��Ĺ�ϵ
    void circle::isInCircle(point p){
        double distance = m_point.distence(p);
        if (distance == this->getR())
        {
            cout << "m_R: " << this->getR() << endl;
            cout << "distance: " << distance << endl;
            cout << "����Բ��" << endl;
        }else if (distance < this->getR())
        {
            cout << "m_R: " << this->getR() << endl;
            cout << "distance: " << distance << endl;
            cout << "����Բ��" << endl;
        }else if (distance > this->getR())
        {
            cout << "m_R: " << this->getR() << endl;
            cout << "distance: " << distance << endl;
            cout << "����Բ��" << endl;
        }else{
            cout << "m_R: " << this->getR() << endl;
            cout << "distance: " << distance << endl;
            cout << "ERROR" << endl;
        } 
    }

    void circle::setR(int m_R){
        this->m_R = m_R;
    }
    int circle::getR(){
        return this->m_R;
    }
    void circle::setPoint(point m_point){
        this->m_point = m_point;
    }
    point circle::getPoint(){
        return this->m_point;
    }