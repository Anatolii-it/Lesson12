#include "complex.h"

int main() {
    Complex a = { 3, 2 };
    Complex b = { 2, 4 };

    Complex sum = add(a, b);
    Complex difference = subtract(a, b);
    Complex product = multiply(a, b);
    Complex quotient = divide(a, b);

    std::cout << "����� �������: " << sum.real << "         ����������:  " << sum.imag << "i\n";
    std::cout << "       г�����: " << difference.real << "         ����������:  " << difference.imag << "i\n";
    std::cout << "      ��������: " << product.real << "         ����������:  " << product.imag << "i\n";
    std::cout << "       ĳ�����: " << quotient.real << "       ����������:  " << quotient.imag << "i\n";

    return 0;
}