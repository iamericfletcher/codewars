/*
Name: Even or Odd
Link: https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/cpp
*/


#include <iostream>

std::string even_or_odd(int number) 
{
  if (number % 2 == 0){
      std::cout << "Even" << std::endl;
  } else {
      std::cout << "Odd" << std::endl;
  }
  return 0;
}


int main()
{
    int number = 15;
    std::string foo;
    foo = even_or_odd(number);
    std::cout << "The number is " << foo << std::endl;
    return 0;

}