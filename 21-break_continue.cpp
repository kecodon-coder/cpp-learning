#include <iostream>
using namespace std;

int main()
{

    // break	 Thoát khỏi vòng lặp luôn
    // continue	 Bỏ qua lượt hiện tại, tiếp tục vòng lặp tiếp theo

    // for (int i = 1; i <= 20; i++)
    // {
    //     if (i == 10)
    //     {                              //Thoát khỏi vòng lặp luôn
    //         break;
    //     }
    //     cout << i << "\n";
    // }

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {                        //Bỏ qua lượt hiện tại, tiếp tục vòng lặp tiếp theo
            continue;
        }
        cout << i << "\n";
    }


    return 0;
}