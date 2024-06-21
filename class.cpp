
#include <iostream>
#include "class.h"
#include "math.h"
using namespace std;

Vector::Vector() {
    m_name = "Wektor";
    a=0;
    b=0;
}

Vector::Vector (const std::string &name, double x, double y) {
    m_name=name;
    a=x;
    b=y;
}

Vector::~Vector() {}

double Vector::length()const {
    double l;
    l = sqrt((a*a)+(b*b));
    return l;
}

void Vector::displayCoordinates() const {
    cout<<"Wektor: "<< m_name<<" ["<<a<<","<<b<<"]"<<endl<<endl;
}

void Vector::displayCal() const {
    cout<<""<< m_name<<"["<<a<<","<<b<<"]"<<endl;
}

const Vector Vector :: sum(const Vector &p) const {
    return Vector ("Suma wektorow ",a+p.a,b+p.b);
}

const Vector Vector :: sub(const Vector &p) const {
    return  Vector ("Roznica wektorow ",a-p.a,b-p.b);
}

double Vector :: scalar(const Vector &p)const {
    double scalar;
    scalar = (a*p.a)+(b*p.b);
    return scalar;
}



