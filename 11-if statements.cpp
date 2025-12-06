#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "tuoi \n";
    cin >> age;
    if (age == 18)
    {
        cout << "du tuoi";
    }
    else if (age < 18)
    {
        cout << "ko du";
    }
    else
    {
        cout << "qua tuoi";
    }
    

    return 0;
}