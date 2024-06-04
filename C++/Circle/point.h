#include<iostream>
#include<math.h>
using namespace std;

class point
{
private:
    int m_x;//X坐标
    int m_y;//Y坐标

public:
    //判断点与点之间的关系
    point(){};
    ~point(){};
    double distence(point &a);

    void setX(int m_x);
    int getX();
    void setY(int m_y);
    int getY();
};

    //判断点与点之间的关系
    double point::distence(point &a){
        int d_x = this->getX() - a.getX();
        int d_y = this->getY() - a.getY();
        // cout << "this->getX(): " << this->getX() << endl;
        // cout << "this->getY(): " << this->getY() << endl;
        // cout << "a.getX(): " << a.getX() << endl;
        // cout << "a.getY(): " << a.getY() << endl;
        // cout << "d_x: " << d_x << endl;
        // cout << "d_y: " << d_x << endl;
        return sqrt((d_x*d_x) + (d_y*d_y));
    }

    void point::setX(int m_x){
        this->m_x = m_x;
    }
    int point::getX(){
        return this->m_x;
    }
    void point::setY(int m_y){
        this->m_y = m_y;
    }
    int point::getY(){
        return this->m_y;
    }