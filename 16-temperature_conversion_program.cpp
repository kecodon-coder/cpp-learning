#include <iostream>
using namespace std;

int main()
{
    system("cls");

    double tam;
    char đơnvị;

    cout << "**************đo nhiệt độ c,f**************\n";

    cout << "nhap đơnvị cần chuyển đổi\n";
    cin >> đơnvị;
    if (đơnvị == 'f' || đơnvị == 'F')
    {
        cout << "nhap do f\n";
        cin >> tam;
        cout << tam << " độ f=" << (tam - 32) * 5 / 9 << " độ c\n";
    }

    else if (đơnvị == 'c' || đơnvị == 'C')
    {
        cout << "nhap do c\n";
        cin >> tam;
        cout << tam << " độ c=" << (tam * 9 / 5) + 32 << " độ f\n";
    }
    else
        cout << "chỉ nhập đơn vị (f,c)\n";

    cout
        << "*******************************************";
    return 0;
}