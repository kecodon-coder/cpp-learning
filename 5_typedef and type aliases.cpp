#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string,int>> pairlist_t;
//typedef std::string text_t;
//typedef int integer_t;
using text_t=std:: string;
using integer_t=int;
int main()
{
    integer_t age=23;
    text_t firstname = "bro";
    std::cout << "hello " << firstname << "\n";
    std::cout << "i'm " <<age  << " year old \n";
    return 0;
}