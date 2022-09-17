#ifndef __CAR_H
#define __CAR_H

#include "vehicle.h"

class CAR : public VEHICLE {
private:
    int numSeat;
    string type;
public:
    // void getSTT(){}
    void setNumseat(const int&);
    void setType(const string&);
    int getNumseat();
    string getType();
    void showInfo();
    friend istream& operator >> (istream& in, CAR&);
    friend ostream& operator << (ostream& out, CAR);
};

#endif // !__CAR_H
