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
    cout << "#      Загальні параметри:    #\n";
    cout << "#        Довжина: " << car.length << " м       #\n";
    cout << "#        Кліренс: " << car.clearance << " м       #\n";
    cout << "#          Об'єм: " << car.engineVolume << " л       #\n";
    cout << "#     Потужність: " << car.enginePower << " лс      #\n";
    cout << "#  Діаметр коліс: " << car.wheelDiameter << " д        #\n";
    cout << "#          Колір: " << car.color << "     #\n";
    cout << "#     Трансмісія: " << car.transmissionType << "     #\n";
    cout << "#-----------------------------#\n";
}
