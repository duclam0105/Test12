#ifndef __TRUCK_H
#define __TRUCK_H

#include "vehicle.h"

class TRUCK : public VEHICLE {
private:
    int tonage;
public:
    // void getSTT(){}
    void setTonage(const int&);
    int getTonage();
    void showInfo();
    friend istream& operator >> (istream& in, TRUCK&);
    friend ostream& operator << (ostream& out, TRUCK);
};

#endif // !__TRUCK_H
