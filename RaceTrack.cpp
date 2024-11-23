#include "RaceTrack.h"
#include <iostream>

RaceTrack::RaceTrack(int trackLength) : track_length(trackLength), champion("") {}

void RaceTrack::addCar(Car *car) {
    cars.push_back(car);
}

void RaceTrack::greenFlag() {
    bool raceOver = false;

    while (!raceOver) {
        for (Car *car : cars) {
            car->advance();
            if (car->getPosition() >= track_length) {
                champion = car->getTeam();
                raceOver = true;
                break;
            }
        }

        // Display positions
        for (Car *car : cars) {
            cout << car->getTeam() << " Position: " << car->getPosition() << endl;
        }
        cout << "-------------------------" << endl;
    }

    cout << "The winner is: " << champion << "!" << endl;
}

string RaceTrack::getChampion() const {
    return champion;
}

RaceTrack::~RaceTrack() {
    for (Car *car : cars) {
        delete car;
    }
}

