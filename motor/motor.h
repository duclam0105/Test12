#ifndef __MOTOR_H
#define __MOTOR_H

#include "vehicle.h"

class MOTOR : public VEHICLE {
private:
    int power;
public:
    // void getSTT(){}
    void setPower(const int&);
    int getPower();
    void showInfo();
    friend istream& operator >> (istream& in, MOTOR&);
    friend ostream& operator << (ostream& out, MOTOR);
};

#endif // !__MOTOR_H
