/*
Name: Beginner Series #4 Cockroach
Link: https://www.codewars.com/kata/55fab1ffda3e2e44f00000c6/train/cpp
*/

// 1 Kilometer per hour = 27.7778 Centimeter / Second

#include <math.h>
#include <iostream>

int cockroach_speed(double s){
    double conversionFormula = floor(s * 27.7778);
    return conversionFormula;
    std::cout << floor(s * 27.7778) << std::endl;
}


int main()
{
    double foo = 1.08;
    int bar;
    bar = cockroach_speed(foo);
}