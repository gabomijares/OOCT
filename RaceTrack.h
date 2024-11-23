#ifndef RACETRACK_H
#define RACETRACK_H

#include "Car.h"
#include <vector>
using namespace std;

class RaceTrack {
private:
    int track_length;
    vector<Car *> cars;
    string champion;

public:
    RaceTrack(int trackLength); 
    void addCar(Car *car);     
    void greenFlag();          
    string getChampion() const;
    void printPositions(); 
    void moveCars();
    bool isRaceFinished();
    ~RaceTrack();               
};

#endif
