#pragma once

#include <iostream>
#include <string>

using namespace std;

class Box
{
public:
    Box(double, double, double);
    void setWidth(double);
    void setLenght(double);
    void setHeight(double);
    double getWidth() const;
    double getLenght() const;
    double getHeight() const;
    void print() const;
    friend Box operator+(Box const&, Box const&); // const& ����� ���� �� �� ���� �������� ����
    // ������� ������ ��� ��������� ��� ������, ������ & ����� ������, ��� ����� ���� ���������

    //Box* ��1 = �1;
    //Box* ��2 = �2;
    //    ��1 = ��1 + ��2

    // a = a + 10; � ������ ���� a+= 10;


private:
    double width;
    double lenght;
    double height;

};
