#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Car {
protected:
    std::string name;
    int position;
public:
    Car(std::string Team) : name(Team), position(0) {}
    virtual void advance() = 0;
    int getPosition() const { return position; }
    virtual int pits() = 0;

class Ferrari : public Car {
public:
    Ferrari() : Car("Ferrari") {}
    void advance() override {
    }
    int pits() override {
        return 1;
    }
};

class RedBull : public Car {
public:
    RedBull() : Car("RedBull") {}
    void advance() override {
    }
    int pits() override {
        return 2;
    }
};

class McLaren : public Car {
public:
    McLaren() : Car("McLaren") {}
    void advance() override {
    }
    int pits() override {
        return 3;
    }
};

class RaceTrack {
private:
    int trackLength;
    std::vector cars;
public:
    RaceTrack(int length) : trackLength(length) {}
    bool finishLine() {
        return false;
    }
    void greenFlag() {
    }
};
