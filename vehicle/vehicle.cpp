#include "vehicle.h"

//VEHICLE FUNCTION========================================================
void VEHICLE::setID(const string& id) { this->ID = id; }
void VEHICLE::setNSX(const string& nsx) { this->NSX = nsx; }
void VEHICLE::setDate(const int& date) { this->date = date; }
void VEHICLE::setPrice(const int& price) { this->price = price; }
void VEHICLE::setColor(const string& color) { this->color = color; }
string VEHICLE::getID() { return this->ID; }
string VEHICLE::getNSX() { return this->NSX; }
int VEHICLE::getDate() { return this->date; }
int VEHICLE::getPrice() { return this->price; }
string VEHICLE::getColor() { return this->color; }