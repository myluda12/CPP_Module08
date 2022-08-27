#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector <int> vec;


    for (int i = 0 ; i < 10 ; i++)
        vec.push_back(i);
    try
    {
        easyfind(vec, 3);
        easyfind(vec, 40);
    }
    catch(const char *e)
    {
        std::cerr << e << '\n';
    }
    

    return 0;
}
