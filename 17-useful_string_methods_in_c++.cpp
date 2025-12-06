#include <iostream>
using namespace std;

int main()
{
    std::string name;

    cout << "nhập tên: ";
    getline(cin, name);

    // if (name.length() >=12){
    //     cout<<"ten ban ko dc qua 12 chu";

    // }else{
    //     cout<<"hợp lệ \n";
    // }

    // if (name.empty())              //kiểm tra chuổi rỗng
    // {
    //     cout << "nhap ten";
    // }
    // else
    // {
    //     cout << "hello";
    // }

    // name.clear();
    // cout<<"hello "<<name;

    // name.append("@gmail.com");      //nối chuỗi
    // cout<<name;

    // cout << name.at(0);                // at(vị trí chữ cái ) 0 là chữ cái đầu

    // cout<<name.insert(0,"THk chó ");      //insert(vị trí chèn , chuỗi)

    // cout << name.find("a");            // find(chuỗi.ký tự cần tìm )

    // cout << name.erase(0, 3);          // erase(vị trí bắt đầu xóa,số lượng cần xóa kể từ vị trí)

    return 0;
}