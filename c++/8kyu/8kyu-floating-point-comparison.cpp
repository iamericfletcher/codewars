/*
Name: Floating point comparison
Link: https://www.codewars.com/kata/5f9f43328a6bff002fa29eb8/train/cpp
*/

#include <cmath>
#include <iostream>

// If statement.
bool approx_equals(double a, double b){
    float numDifference = abs(a - b);
    if (numDifference < 0.001){
        return true;
    } else {
        return false;
    }
}

// Ternary operator.
bool approx_equals2(double a, double b){
    double numDifference = abs(a - b);
    int foo = (numDifference < 0.001) ? true : false;
}


int main()
{
    double a = 175.9827;
    double b = 82.25;
    bool bar;
    bar = approx_equals(a, b);
    std::cout << bar << std::endl;

}