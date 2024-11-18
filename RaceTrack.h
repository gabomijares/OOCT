#include <vector>

#ifndef RACETRACK_H
#define RACETRACK_H

#include "Car.h"

class RaceTrack {
private:
    int track_length;
    vector<Car*> cars;
    string champion;

public:
    RaceTrack(int length);
    ~RaceTrack();

    void addCar(Car* car);
    void greenFlag();
    string getCarPositions() const;
    string getChampion();
};

#endif
