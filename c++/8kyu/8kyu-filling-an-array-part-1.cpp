/*
Name: Filling an array (part 1)
Link: https://www.codewars.com/kata/571d42206414b103dc0006a1/train/cpp
*/

#include <vector> // std::vector
#include <iostream> // std::cout

std::vector<int> arr(int n = 0){
    // Default initialize a vector of type int. 
    // Elements will be added to vector at run time.
    std::vector<int> foo;
    // Initialize a for loop starting at 0, ending at n-1, and incrementing by 1 each time. 
    for (size_t i = 0; i < n; i++)
    {
        // For each run of the for loop, add that element at the end of the vector using push_back().
        foo.push_back(i);
        // Print to the standard output each element of foo. 
        std::cout << foo[i] << std::endl;
    }
    return foo;
}


int main()
{

    int foo = 10000000;
    std::vector<int> bar;
    bar = arr(foo);

}