#pragma once
#include <string>

class Car {
protected:
    std::string team;       
    int position;
    int pit_stop_time;
    bool inPitStop;         
    int pitStopTurnsRemaining; 

public:
    Car(std::string team, int pitStopTime); 
    std::string getTeam() const; 
    void setTeam(const std::string &team);
    void setPosition(int pos);
    void setPitStopTime(int time);
    int getPosition() const;
    int getPitStopTime() const;
    virtual void advance();
    virtual ~Car() {}
};
