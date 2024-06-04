#include<iostream>
using namespace std;
#include"point.h"

class circle
{
private:
    double m_R;//半径
    point m_point;//圆心

public:
    //判断点与圆之间的关系
    circle(){};
    ~circle(){};
    void isInCircle(point p);
    void setR(int m_R);
    int getR();
    void setPoint(point m_point);
    point getPoint();
};

//判断点与圆之间的关系
    void circle::isInCircle(point p){
        double distance = m_point.distence(p);
        if (distance == this->getR())
        {
            cout << "m_R: " << this->getR() << endl;
            cout << "distance: " << distance << endl;
            cout << "点在圆上" << endl;
        }else if (distance < this->getR())
        {
            cout << "m_R: " << this->getR() << endl;
            cout << "distance: " << distance << endl;
            cout << "点在圆内" << endl;
        }else if (distance > this->getR())
        {
            cout << "m_R: " << this->getR() << endl;
            cout << "distance: " << distance << endl;
            cout << "点在圆外" << endl;
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