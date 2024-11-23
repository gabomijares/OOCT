#include "Car.h"

Car::Car(string team, int pitStopTime) : team(team), position(0), pit_stop_time(pitStopTime) {}

string Car::getTeam() const {
    return team;
}

void Car::setTeam(const string &team) {
    this->team = team;
}

int Car::getPosition() const {
    return position;
}

void Car::setPosition(int pos) {
    position = pos;
}

int Car::getPitStopTime() const {
    return pit_stop_time;
}

void Car::setPitStopTime(int time) {
    pit_stop_time = time;
}

void Car::advance() {
    position += rand() % 5 + 1; // Default random movement for testing
}
