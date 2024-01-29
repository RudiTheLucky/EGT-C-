#include <iostream>
#include "Shape.h"

using namespace std;

Shape::Shape(int side) : a(side) {}
void Shape::setA(int side)
{
    this->a = side;
}
int Shape::getA() const
{
    return this->a;
}

void Shape::print() const
{
    cout << "In shape, the side is: " << a << endl;
}

double Shape::getArea() const
{
    cout << "In shape, the area is: " << endl;
    return 0.0;
}
// ����� true ��� ������ �� ����� � false ��� �� ��
bool operator==(Shape const& shapeOne, Shape const& shapeTwo)
{
    return shapeOne.getArea() == shapeTwo.getArea();
}

// ����� true ��� ������ �� ������ shape � ��-������ �� ���� �� ������ � false ��� �� �
bool operator>(Shape const& shapeOne, Shape const& shapeTwo)
{
    return shapeOne.getArea() > shapeTwo.getArea();

}

// ����� true ��� ������ �� ������ shape � ��-����� �� ���� �� ������ � false ��� �� �
bool operator<(Shape const& shapeOne, Shape const& shapeTwo)
{
    return shapeOne.getArea() < shapeTwo.getArea();
}