#include "complex.h"

int main() {
    Complex a = { 3, 2 };
    Complex b = { 2, 4 };

    Complex sum = add(a, b);
    Complex difference = subtract(a, b);
    Complex product = multiply(a, b);
    Complex quotient = divide(a, b);

    cout << "Сумма дорівнює: " << sum.real << "         комплексне:  " << sum.imag << "i\n";
    cout << "       Різниця: " << difference.real << "         комплексне:  " << difference.imag << "i\n";
    cout << "      Множення: " << product.real << "         комплексне:  " << product.imag << "i\n";
    cout << "       Ділення: " << quotient.real << "       комплексне:  " << quotient.imag << "i\n";

    return 0;
}