#include "car.h"

int main() {
    Car myCar;
    setCarParameters(myCar, 4.5, 0.2, 2.2, 150, 18, "�������", "�������");
    displayCarParameters(myCar);

    return 0;
}
