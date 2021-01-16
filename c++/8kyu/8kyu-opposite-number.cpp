/*
Name: Opposite number
Link: https://www.codewars.com/kata/56dec885c54a926dcd001095/train/cpp
*/

#include <iostream>

int opposite(int number){
    int output = (number > 0) ? number * -1 : number * -1; 
    std::cout << output << std::endl;
    return 0;
}


int main()
{
    int foo = -10;
    int bar;
    bar = opposite(foo);
}