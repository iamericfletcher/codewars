/*
Name: Get the Middle Character
Link: https://www.codewars.com/kata/56747fd5cb988479af000028/train/cpp
*/

#include <string>
#include <iostream>
#include <math.h>

std::string get_middle(std::string input){
    int inputSize = input.size();
    std::cout << "String length is: " << inputSize << std::endl;
    if (inputSize % 2 == 0){
        int stringStartingIndex_Even = (inputSize / 2) - 1;
        std::string outputString_Even = input.substr(stringStartingIndex_Even, 2);
        std::cout << "The middle two letters are: " << outputString_Even << std::endl;
        return outputString_Even;
    } else {
        int stringStartingIndex_Odd = floor(inputSize / 2);
        std::string outputString_odd = input.substr(stringStartingIndex_Odd, 1);
        std::cout << "The middle letter is: " << outputString_odd << std::endl;
        return outputString_odd;
    }
}

int main()
{
    std::string foo ("middle");
    std::string bar;
    bar = get_middle(foo);
    std::cout << bar << std::endl;
}