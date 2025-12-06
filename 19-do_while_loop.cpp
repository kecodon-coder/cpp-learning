#include <iostream>
using namespace std;

int main() {

    int n;

    // while (n>0)                      // lỗi do n chưa gán giá trị nào trước khi chạy
    // {
    //     cout<<"nhap n: ";
    //     cin>>n;
    // }


    do (n>0)                      // lỗi do n chưa gán giá trị nào trước khi chạy
    {
        cout<<"nhap n: ";
        cin>>n;
    }while(n>0);
    



    // Khác với while: code trong do…while chạy trước, kiểm tra sau.
    

    return 0;
}