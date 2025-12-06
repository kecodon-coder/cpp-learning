#include <iostream>
using namespace std;

int main()
{

    int h;
    int c;
    char kt;

    cout << "nhap hang ";
    cin >>h ;

    cout << "nhap cot ";
    cin >> c;

    cout << "nhap ky tu ";
    cin >> kt;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << kt<<' ';
        }
        cout << "\n";
    }

    return 0;
}