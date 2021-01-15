/*
Name: Sum of positive
Link: https://www.codewars.com/kata/5715eaedb436cf5606000381/train/cpp
*/

#include <vector> // vector, empty, size.
#include <iostream> // cout 

int positive_sum(const std::vector<int> arr){
    if (arr.empty()){
        std::cout << 0 << std::endl;
        return 0;
    } else {
        int positive_num_sum = 0;
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (arr[i] >= 0){
                std::cout << arr[i] << std::endl;
                positive_num_sum += arr[i];  
            } else {
                std::cout << arr[i] << std::endl;
                positive_num_sum += 0;
            }
        }
    std::cout << "The sum is: " << positive_num_sum << std::endl;
    return 0;
    }
}

int main()
{

    std::vector<int> foo{1, 2, 3, 4, 5, 100, 1230, 12, 123, 23};
    int bar;
    bar = positive_sum(foo);

}

// the function is returning 1 when it should be returning 1+2+3+4 or 10.

