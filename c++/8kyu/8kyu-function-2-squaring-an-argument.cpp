/*
Name: Function 2 - squaring an argument
Link: https://www.codewars.com/kata/523b623152af8a30c6000027/train/cpp
*/

#include <iostream>
#include <math.h>

double square(double number){
    double numberSquared = pow(number, 2.0);
    std::cout << numberSquared << std::endl;
    return numberSquared;
}

int main()
{
    double foo = 7;
    double bar;
    bar = square(foo);
}