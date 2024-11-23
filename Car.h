#include <string>
using namespace std;

#ifndef CAR_H
#define CAR_H

class Car {
protected:
    string team;
    int position;
    int pit_stop_time;

public:
    Car(string team, int pitStopTime);
    string getTeam() const;
    void setTeam(const string &team);
    void setPosition(int pos);
    void setPitStopTime(int time);
    int getPosition() const;
    int getPitStopTime() const;
    string getTeam() const;
    virtual void advance();
    virtual ~Car() {}
};

#endif
