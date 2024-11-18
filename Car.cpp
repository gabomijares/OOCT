#include "Car.h"

Car::Car(const string& team_name, int pit_time)
    : team(team_name), position(0), pit_stop_time(pit_time) {}

Car::~Car() {}

int Car::getPosition() const {
    return position;
}

string Car::getTeam() const {
    return team;
}

void Car::pitStop() {
    pit_stop_time--;
}
