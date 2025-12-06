#include <iostream>
using namespace std;
int main()
{
    int age;
    std::string name;

    cout << "what's your age? ";
    cin >> age;
    cout << "what's your full name?: ";
    // cin >> name;
    getline(cin>>ws, name);

    
    cout << "hello " << name << "\n";
    cout << "you age " << age << " year old";
    return 0;
}