#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;


struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    std::string color;
    std::string transmissionType;
};

void setCarParameters(Car& car, double length, double clearance, double engineVolume, double enginePower, double wheelDiameter, const std::string& color, const std::string& transmissionType);

void displayCarParameters(const Car& car);

#endif // CAR_H

