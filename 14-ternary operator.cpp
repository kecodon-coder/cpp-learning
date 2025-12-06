#include <iostream>
using namespace std;
int main()
{
    /*
    (condition) ? value_if_true : value_if_false;

    Giải thích:
    condition → điều kiện cần kiểm tra (a > b, x == 10, v.v…)
    value_if_true → giá trị trả về nếu điều kiện đúng
    value_if_false → giá trị trả về nếu điều kiện sai
    */
    // int n = 8;
    // n % 2==0 ? cout << "chan" : cout << "le";
    // bool n=false;
    // cout << (n? "dung" : "sai");
    int n = 6;
    bool b = (n % 2 == 0 ? true : false);
    cout << boolalpha;

    cout << b;
    return 0;
}