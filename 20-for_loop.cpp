#include <iostream>
using namespace std;

int main()
{

    //     for (khởi_tạo; điều_kiện; cập_nhật) {
    //     // code lặp tại đây
    // }
    // vd:
    //     for (int i = 1; i <= 5; i++) {
    //     cout << i << " ";
    // }

    int i;

    // for (i = 1; i <= 6; i++)
    // {
    //     cout << "nam\n";
    // }

    // for (i = 1; i <= 20; i += 2)      //VÒNG LẶP TĂNG
    // {
    //     cout << i << '\n';
    // }

    for (i = 20; i >= 1; i -= 1)
    { // VÒNG LẶP GIẢM
        cout << i << '\n';
    }

    return 0;
}