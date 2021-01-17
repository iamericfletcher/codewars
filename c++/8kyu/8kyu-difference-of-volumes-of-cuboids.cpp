/*
Name: Difference of Volumes of Cuboids
Link: https://www.codewars.com/kata/58cb43f4256836ed95000f97/train/cpp
*/

#include <array>
#include <iostream>
#include <numeric>

int findDifference(std::array<int, 3> a, std::array<int, 3> b){
    int prod_a = std::accumulate(a.begin(), a.end(), 1, std::multiplies<int>());
    int prod_b = std::accumulate(b.begin(), b.end(), 1, std::multiplies<int>());
    return abs(prod_a - prod_b);
}


int main()
{
    std::array<int, 3> foo{3, 2, 5};
    std::array<int, 3> bar{1, 4, 4};
    int z;
    z = findDifference(foo, bar);
    std::cout << z << std::endl;
}