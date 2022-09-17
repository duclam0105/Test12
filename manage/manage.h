#ifndef __MANAGE_H
#define __MANAGE_H

#include "vehicle.h"
#include "car.h"
#include "motor.h"
#include "truck.h"

class QLPTGT {
private:
    vector<VEHICLE*> v;
public:
    QLPTGT() {}
    virtual ~QLPTGT() {
        if (!v.empty()) {
            for (VEHICLE* i : v) {
                delete(i);
            }
        }
    }
    void showList();
    int getSize();
    void add1(VEHICLE*);
    void addVehicle(const int& a);
    void removeVehicle(const string&);
    void findVehicle(const string&, const string&);
    void resetSTT();
};

#endif // !__MANAGE_H
