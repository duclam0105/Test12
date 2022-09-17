#include "truck.h"

//TRUCK FUNCTION========================================================
void TRUCK::setTonage(const int& t) { this->tonage = t; }
int TRUCK::getTonage() { return this->tonage; }
void TRUCK::showInfo() {
    cout << "ID: " << this->getID() << " - NSX: " << this->getNSX() << " - Date: " << this->getDate() << " - Price: "
        << this->getPrice() << "$ - Color: " << this->getColor() << " - Tonage: " << this->tonage << endl;
}
istream& operator >> (istream& in, TRUCK& c) {
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
    cout << "Nhap tai trong: "; cin >> c.tonage;
    return in;
}
ostream& operator << (ostream& out, TRUCK c) {
    cout << "ID: " << c.getID() << " - NSX: " << c.getNSX() << " - Date: " << c.getDate() << " - Price: "
        << c.getPrice() << "$ - Color: " << c.getColor() << " - Tonage: " << c.tonage << endl;
    return out;
}
