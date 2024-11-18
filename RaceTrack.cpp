#include "RaceTrack.h"
#include <iostream>
using namespace std;

RaceTrack::RaceTrack(int length) : track_length(length), champion("") {}

RaceTrack::~RaceTrack() {
    for (Car* car : cars) {
        delete car;
    }
}

void RaceTrack::addCar(Car* car) {
    cars.push_back(car);
}

void RaceTrack::greenFlag() {
    bool race_finished = false;

    while (!race_finished) {
        for (Car* car : cars) {
            car->advance();
            if (car->getPosition() >= track_length) {
                champion = car->getTeam();
                race_finished = true;
                break;
            }
        }
        cout << getCarPositions() << endl;
    }
}

string RaceTrack::getCarPositions() const {
    string positions;
    for (Car* car : cars) {
        positions += car->getTeam() + ": " + to_string(car->getPosition()) + " units\n";
    }
    return positions;
}

string RaceTrack::getChampion() {
    return "Champion: " + champion;
}
