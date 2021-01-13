/*
Name: N-th Power
Link: https://www.codewars.com/kata/57d814e4950d8489720008db/train/cpp
*/

#include <vector>
using std::vector;
#include <iostream>
#include <cmath>

int index(const std::vector<int> &vector, int n) {
    // Test to see if n is less than the length of the vector. 
    if (n < vector.size()) {
        // Use pow to raise the value in vector at index n by n. 
        return pow(vector[n], n);
    }else{
        // If n is larger than the length of the vector return an error.
        return -1;
    }
}

int main()
{
    vector<int> v{5,1,3,3};
    int n = 3;
    int z;
    z = index(v, n);
    std::cout << z << std::endl;
}