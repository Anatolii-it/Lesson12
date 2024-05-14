#include "passenger.h"

int main() {
    int N;
    cout << "¬вед≥ть к≥льк≥сть пасажир≥в: ";
    cin >> N;

    Passenger* passengers = new Passenger[N];

    inputPassengers(passengers, N);
    sortPassengersByFlightNumber(passengers, N);
    printSortBuFl(passengers, N);
    displayPassengersWithHeavyLuggage(passengers, N);

    delete[] passengers;

    return 0;
}
