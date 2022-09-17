#include "car.h"

//CAR FUNCTION========================================================
void CAR::setNumseat(const int& num) { this->numSeat = num; }
void CAR::setType(const string& type) { this->type = type; }
int CAR::getNumseat() { return this->numSeat; }
string CAR::getType() { return this->type; }
void CAR::showInfo() {
    cout << "ID: " << this->getID() << " - NSX: " << this->getNSX() << " - Date: " << this->getDate() << " - Price: "
        << this->getPrice() << "$ - Color: " << this->getColor() << " - Num Seat: " << this->numSeat << " - Type: " << this->type << endl;
}
istream& operator >> (istream& in, CAR& c) {
    string str;
    cout << "Nhap ID: "; cin >> str;
    c.setID(str); str.erase();
    cout << "Nhap NSX: "; cin >> str;
    c.setNSX(str); str.erase();
    int a;
    cout << "Nhap nam san xuat: "; cin >> a;
    c.setDate(a);
    cout << "Nhap gia: "; cin >> a;
    c.setPrice(a);
    cout << "Nhap mau xe: "; cin >> str;
    c.setColor(str); str.erase();
    cout << "Nhap so ghe ngoi: "; cin >> c.numSeat;
    cout << "Nhap loai xe: "; cin >> c.type;
    return in;
}
ostream& operator << (ostream& out, CAR c) {
    cout << "ID: " << c.getID() << " - NSX: " << c.getNSX() << " - Date: " << c.getDate() << " - Price: "
        << c.getPrice() << "$ - Color: " << c.getColor() << " - Num Seat: " << c.numSeat << " - Type: " << c.type << endl;
    return out;
}

