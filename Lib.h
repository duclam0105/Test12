#ifndef __LIBRARY_H
#define __LIBRARY_H
/*Nghành công an cần quản lý các phương tiện giao thông gồm: ô tô, xe máy, xe tải.
Mỗi loại gồm các thông tin: ID, Hãng sản xuất, năm sản xuất, giá bán và màu xe.
Các ô tô có các thuộc tính riêng: số chỗ ngồi, kiểu động cơ.
Các xe máy có các thuộc tính riêng: công xuất.
Xe tải cần quản lý thêm: Trọng tải.
Yêu cầu 1: Xây dựng các lớp để quản lý các phương tiện trên sao cho hiệu quả.
Yêu cầu 2: Xây dựng lớp QLPTGT có các chức năng:
Thêm, xoá(theo ID) các phương tiện thuộc các loại trên.
Tìm phương tiện theo hãng sản xuất, màu.
Thoát chương trình.*/
#include <iostream>
#include <vector>

using namespace std;

#define yes 1
#define no 0
typedef enum { cmd_exit, cmd_add, cmd_remove, cmd_find, cmd_showlist }comand;
typedef enum { exit_t, car_t, motor_t, truck_t }type_t;

class myException :public exception {
    string msg;
public:
    myException(string mess) {
        msg = mess;
    }
    string what() {
        return msg;
    }
};

#endif