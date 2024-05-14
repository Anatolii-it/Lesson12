#include "car.h"

void setCarParameters(Car& car, double length, double clearance, double engineVolume, double enginePower, double wheelDiameter, const std::string& color, const std::string& transmissionType) {
    car.length = length;
    car.clearance = clearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

void displayCarParameters(const Car& car) {
    cout << "#-----------------------------#\n";
    cout << "#      ������� ���������:    #\n";
    cout << "#        �������: " << car.length << " �       #\n";
    cout << "#        ������: " << car.clearance << " �       #\n";
    cout << "#          ��'��: " << car.engineVolume << " �       #\n";
    cout << "#     ���������: " << car.enginePower << " ��      #\n";
    cout << "#  ĳ����� ����: " << car.wheelDiameter << " �        #\n";
    cout << "#          ����: " << car.color << "     #\n";
    cout << "#     ��������: " << car.transmissionType << "     #\n";
    cout << "#-----------------------------#\n";
}
