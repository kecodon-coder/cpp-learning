#include <iostream>
using namespace std;

int main()
{

    srand(time(NULL));

    int n = (rand() % 6)+1;       //luôn cho kết qảu từ 1- 5 ,+1 thành 1-6

    cout << n;

    return 0;
}