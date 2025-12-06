#include <iostream>

namespace first{
    int x= 1;
}
namespace second{
    int x= 5;
}
int main( ){
    int x=3;
    std::cout<< " x = "<< first::x;
    return 0;
}