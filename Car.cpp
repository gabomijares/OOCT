#include "Car.h"
#include <cstdlib>

Car::Car(std::string team, int pitStopTime) 
    : team(team), position(0), pit_stop_time(pitStopTime), inPitStop(false), pitStopTurnsRemaining(0) {}

void Car::advance() {
    if (inPitStop) {
        // Decrease the number of turns the car stays in the pit stop
        pitStopTurnsRemaining--;
        if (pitStopTurnsRemaining <= 0) {
            inPitStop = false;  // Car finishes its pit stop
        }
        return; // Don't move the car if it's in the pit stop
    }

    // If the car is not in a pit stop, move normally
    position += rand() % 5 + 1; 

    if (!inPitStop && rand() % 10 < 3) { 
        inPitStop = true;
        
        // Set the number of turns in the pit stop based on the team
        if (team == "Ferrari") {
            pitStopTurnsRemaining = rand() % 2 + 2; // 2 to 3 turns
        } else if (team == "RedBull") {
            pitStopTurnsRemaining = rand() % 3 + 1; // 1 to 3 turns
        } else if (team == "McLaren") {
            pitStopTurnsRemaining = rand() % 2 + 1; // 1 to 2 turns
        }
    }
}

std::string Car::getTeam() const {
    return team; 
}

int Car::getPosition() const {
    return position; 
}
