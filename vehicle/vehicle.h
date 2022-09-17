#ifndef __VEHICLE_H
#define __VEHICLE_H

#include "Lib.h"

class VEHICLE {
private:
    string ID;
    string NSX;
    int date;
    int price;
    string color;
public:
    int stt;
    VEHICLE() {}
    virtual ~VEHICLE() {}
    void setID(const string&);
    void setNSX(const string&);
    void setDate(const int&);
    void setPrice(const int&);
    void setColor(const string&);
    string getID();
    string getNSX();
    int getDate();
    int getPrice();
    string getColor();
    virtual void showInfo() {
    }
};

#endif // !__VEHICLE_H
