#pragma once

template <typename T>
void easyfind(T where, int target)
{
    if (std::find(where.begin(), where.end(), target) != where.end())
        std::cout << "Found" << std::endl;
    else
        throw "Target doesnt exist";
}
