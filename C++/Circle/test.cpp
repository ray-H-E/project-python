#include<iostream>
using namespace std;
#include"cricle.h"

int main(){
    circle cr;
    point crp;
    point p;


    cr.setR(5);

    crp.setX(5);
    crp.setY(0);
    cr.setPoint(crp);

    p.setX(0);
    p.setY(0);

    cr.isInCircle(p);
    return 0;
}