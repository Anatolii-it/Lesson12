#include "complex.h"

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real;
    result.imag = a.imag * b.imag;
    return result;
}

Complex divide(Complex a, Complex b) {
    Complex result;
    result.real = (a.real / b.real);
    result.imag = (a.imag / b.imag);
    return result;
}
