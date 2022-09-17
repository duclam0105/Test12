#include "Lib.h"
#include "vehicle.h"
#include "car.h"
#include "motor.h"
#include "truck.h"
#include "manage.h"

//==================================================================================//

//==================================================================================//
int main() {
    int temp;
    QLPTGT x;
    while (true) {
        cout << "==========================================\n";
        cout << "1-Them moi xe\n2-Xoa xe\n3-Tim kiem\n4-Hien thi danh sach"
            << "\n0-Thoat\nMoi ban nhap: ";
        cin >> temp;
        cout << "===================\n";
        switch (temp) {
        case cmd_exit: {
            cout << "Close the program..." << endl;
            system("cls");
            return 0;
        }
        case cmd_add:
            int temp;
            cout << "1-Them moi otor\n2-Them moi xe may\n3-Them moi xe tai"
                << "\n0-Thoat\nMoi ban nhap: ";
            cin >> temp;
            x.addVehicle(temp);
            break;
        case cmd_remove: {
            cout << "Nhap ID cua xe can xoa: ";
            string ID;
            cin >> ID;
            x.removeVehicle(ID);
            break;
        }
        case cmd_find: {
            string nsx, color;
            cout << "Nhap NSX cua xe: "; cin >> nsx;
            cout << "Nhap mau sac cua xe: "; cin >> color;
            x.findVehicle(nsx, color);
            break;
        }
        case cmd_showlist: {
            x.showList();
            break;
        }
        default:
            break;
        }
    }
    cout << "Close the program..." << endl;
    return 0;
}
