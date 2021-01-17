/*
Name: Remove First and Last Character
Link: https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/cpp
*/

#include <string>
#include <iostream>
using namespace std;


string sliceString (string str) {
    // calculate the ending position.
    int string_end = str.size() - 2;
    // Initialize a new string to store the portion of str without the first and last character. 
    // Use substr() with starting and ending position to construct the new string object. 
    string str_removed = str.substr(1, string_end);
    std::cout << str_removed << std::endl;
}


int main(){
    std::string foo = "We are all in this together!";
    string bar;
    bar = sliceString(foo);
}
