//�������� �������� �� �++, �����:
//
//�������� �������� �� ���������� ���� �����
//
//��������� ���� ������� � ����� ��� �������
//
//��� ������� � �����, �� ������ �� ������� �even�, ��� � ������� � �odd�


#include <iostream>

int main() {
    int n;
    std::cout << "How many numbers: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        std::cout << "Enter a number: ";
        std::cin >> num;

        if (num % 2 == 0) {
            std::cout << "even" << std::endl;
        }
        else {
            std::cout << "odd" << std::endl;
        }
    }

    return 0;
}