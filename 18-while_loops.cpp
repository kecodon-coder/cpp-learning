#include <iostream>
using namespace std;

int main()
{

    //     while (điều kiện) {
    //      code được lặp lại
    // }

    std::string name ;
    while(name.empty())
    {
        cout << "nhập tên : ";
        getline(cin, name);
    }

    cout << "hello " << name;

    return 0;
}