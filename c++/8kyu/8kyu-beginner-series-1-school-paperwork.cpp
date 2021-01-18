/*
Name: Beginner Series #1 School Paperwork
Link: https://www.codewars.com/kata/55f9b48403f6b87a7c0000bd/train/cpp
*/

#include <iostream>

// Using the conditional (or ternary) operator (?:).
int paperwork(int n, int m){
    // If n or m is less than 0, return 0, else return the product of n and m. 
    int foo = (n < 0 || m < 0) ?  0 : n * m;
    return foo;
}

// Using if statement.
int paperwork(int n, int m){
    // If n or m is less than 0, return 0.
    if (n < 0 || m <0){
        return 0;
    // If n or m is not less than 0, n*m.
    } else {
        return n * m;
    }
}


int main()
{
    int n = 0;
    int m = 5;
    int foo;
    foo = paperwork(n, m);
    std::cout << foo << std::endl;
}