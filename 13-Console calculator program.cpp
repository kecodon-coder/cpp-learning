#include <iostream>
using namespace std;

int main()
{
    char pt;
    double kq, a, b;

    cout << "nhap #1\n";
    cin >> a;
    cout << "nhap #2\n";
    cin >> b;
    cout << "nhap pt(* / + -)";
    cin >> pt;
    switch (pt)
    {
    case '/':
        kq = a / b;
        break;
    case '+':
        kq = a + b;
        break;
    case '-':
        kq = a - b;
        break;
    case '*':
        kq = a * b;
        break;

    default:
        cout << "phep tinh ko hop le";
        return 0;
    }
    cout << "kq la: " << kq;
    return 0;
}