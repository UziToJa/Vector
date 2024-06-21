
#ifndef WEKTOR_CLASS_H
#define WEKTOR_CLASS_H

#include <string>
class Vector{
private:
    std::string m_name;
    double a;
    double b;

public:
    Vector();
    Vector(const std::string& name, double x = 0, double y = 0);
    ~Vector();
    void displayCoordinates() const;
    void displayCal() const;
    double length()const;
    const Vector sum(const Vector& p) const;
    const Vector sub(const Vector& p) const;
    double scalar(const Vector& p)const;
};

#endif //WEKTOR_CLASS_H
