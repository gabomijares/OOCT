#include "RaceTrack.h"
#include <iostream>

RaceTrack::RaceTrack(int trackLength) : track_length(trackLength), champion("") {}

void RaceTrack::addCar(Car *car) {
    cars.push_back(car);
}

// Moves all cars forward.
void RaceTrack::moveCars() {
    for (Car *car : cars) {
        car->advance(); 
    }
}

// Prints the positions of all cars.
void RaceTrack::printPositions() {
    for (Car *car : cars) {
        cout << car->getTeam() << " Position: " << car->getPosition() << endl;
    }
    cout << "-------------------------" << endl;
}

// Check if the race is finished. If a car reaches or exceeds the track length, the race ends.
bool RaceTrack::isRaceFinished() {
    for (Car *car : cars) {
        if (car->getPosition() >= track_length) {
            champion = car->getTeam();
            return true;
        }
    }
    return false;
}

void RaceTrack::greenFlag() {
    bool raceOver = false;

    while (!raceOver) {
        moveCars(); 
        printPositions();

        cout << "ENTER to advance" << endl;
        cin.get();

        raceOver = isRaceFinished();
    }

    cout << "The WINNER is: " << champion << "!" << endl;
}

string RaceTrack::getChampion() const {
    return champion;
}

RaceTrack::~RaceTrack() {
    for (Car *car : cars) {
        delete car; 
    }
}


