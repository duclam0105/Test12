#include "manage.h"


void QLPTGT::showList() {
    if (v.size() == 0) {
        cout << "Khong co phan tu nao trong danh sach!" << endl;
        return;
    }
    cout << "So phan tu trong danh sach: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << i + 1 << ": ";
        CAR* pc = dynamic_cast<CAR*>(v[i]);
        if (pc != nullptr) {
            pc->showInfo();
        }
        else if (pc == nullptr) {
            MOTOR* pm = dynamic_cast<MOTOR*>(v[i]);
            if (pm != NULL) {
                pm->showInfo();
            }
            else if (pm == nullptr) {
                TRUCK* pt = dynamic_cast<TRUCK*>(v[i]);
                if (pt != NULL) {
                    pt->showInfo();
                }
            }
        }

    }
}
int QLPTGT::getSize() {
    return v.size();
}
void QLPTGT::add1(VEHICLE* a) {
    v.push_back(a);
    a->stt = v.size() - 1;
    // cout << "Them moi thanh cong!\n";
}
void QLPTGT::removeVehicle(const string& ID) {
    int count = 0;
    this->resetSTT();
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getID() == ID) {
            count++;
            v.erase(v.begin() + v[i]->stt);
            this->resetSTT();
        }
    }
    if (count == 0) {
        cout << "Khong co xe nao co ID la " << ID << " trong danh sach!" << endl;
        return;
    }
    cout << "Xoa thanh cong!" << endl;
}
void QLPTGT::findVehicle(const string& NSX, const string& color) {
    QLPTGT v1;
    int count = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i]->getNSX() == NSX) {
            if (v[i]->getColor() == color) {
                count++;
                v1.add1(v[i]);
            }
        }
    }
    if (count == 0) {
        cout << "Khong co phan tu nao!" << endl;
        return;
    }
    // cout << "Co "<< count << " phan tu trong danh sach:\n";
    v1.showList();
}
void QLPTGT::resetSTT() {
    if (v.size() != 0) {
        for (int i = 0; i < v.size(); i++) {
            v[i]->stt = i;
        }
    }
}
void QLPTGT::addVehicle(const int& a) {
    if (a == car_t) {
        CAR* c = new CAR;
        if (c == nullptr) return;
        cin >> *c;
        v.push_back(c);
    }
    if (a == motor_t) {
        MOTOR* c = new MOTOR;
        if (c == nullptr) return;
        cin >> *c;
        v.push_back(c);
    }
    if (a == truck_t) {
        TRUCK* c = new TRUCK;
        if (c == nullptr) return;
        cin >> *c;
        v.push_back(c);
    }
    v[v.size() - 1]->stt = v.size() - 1;
    cout << "Them moi thanh cong!\n";
}