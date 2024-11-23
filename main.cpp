#include <iostream>
#include <memory>    
#include "RaceTrack.h"
#include "Car.h"

int main() {
    int trackLength = 100;
    RaceTrack track(trackLength);

    srand(static_cast<unsigned int>(time(0)));

    // Create team cars
    auto ferrari = std::make_unique<Car>("Ferrari", 3);
    auto redBull = std::make_unique<Car>("RedBull", 3);
    auto mclaren = std::make_unique<Car>("McLaren", 3);

    // Add cars to the track
    track.addCar(ferrari.get());
    track.addCar(redBull.get());
    track.addCar(mclaren.get());

    // Start the race
    track.greenFlag();

    return 0;
}
