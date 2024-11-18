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
    Car(const string& team_name, int pit_time);
    virtual ~Car();
    virtual void advance() = 0;
    int getPosition() const;
    string getTeam() const;
    virtual void pitStop();
};

#endif
