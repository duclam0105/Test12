#include "motor.h"

//MOTOR FUNCTION========================================================
void MOTOR::setPower(const int& p) { this->power = p; }
int MOTOR::getPower() { return this->power; }
void MOTOR::showInfo() {
    cout << "ID: " << this->getID() << " - NSX: " << this->getNSX() << " - Date: " << this->getDate() << " - Price: "
        << this->getPrice() << "$ - Color: " << this->getColor() << " - Power: " << this->power << endl;
}
istream& operator >> (istream& in, MOTOR& c) {
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
    cout << "Nhap Power: "; cin >> c.power;
    return in;
}
ostream& operator << (ostream& out, MOTOR c) {
    cout << "ID: " << c.getID() << " - NSX: " << c.getNSX() << " - Date: " << c.getDate() << " - Price: "
        << c.getPrice() << "$ - Color: " << c.getColor() << " - Power: " << c.power << endl;
    return out;
}

