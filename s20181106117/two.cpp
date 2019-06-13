//
//  two.cpp
//  s20181106117
//
//  Created by s20181106117 on 2019/6/13.
//  Copyright © 2019 s20181106117. All rights reserved.
//

#include "two.hpp"
#include <iostream>
using namespace std;
const double PI=3.14;

class Shape {
public:
    virtual double getArea()=0;
    virtual double getPerim()=0;
};

/* ------请在这里填写答案 ------*/
class Rectangle :public Shape{
public:
    Rectangle(double &wi,double &hi)
    {
        weight=wi;
        height=hi;
    }
    
    double getArea()
    {
        return weight*height;
    }
    double getPerim()
    {
        return 2*(weight+height);
    }
private:
    double weight;
    
    double height;
    
};



class Circle :public Shape{
public:
    Circle(double w=0){
        weight=w;
        
    }
    double getArea()
    {
        return 3.14*weight*weight;
    }
    double getPerim()
    {
        return 2*3.14*weight;
    }
private:
    double weight;
    double height;
    
};
int main() {
    Shape *p;
    int n;
    double w,h,r;
    scanf("%d",&n);
    switch(n) {
        case 1: {
            cin>>w>>h;
            Rectangle rect(w,h);
            cout<<"area="<<rect.getArea()<<endl;
            cout<<"perim="<<rect.getPerim()<<endl;
            break;
        }
        case 2: {
            cin>>r;
            Circle c(r);
            cout<<"area="<<c.getArea()<<endl;
            cout<<"perim="<<c.getPerim()<<endl;
            break;
        }
    }
    
    return 0;
}
