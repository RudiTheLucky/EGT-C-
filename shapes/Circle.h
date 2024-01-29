#pragma once

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(int, double);
    void draw(); //const override;
    void setRadius(double);
    double getRadius();
    // ������������ �� ��������� �� ��������
    
private:
    double radius;
};
