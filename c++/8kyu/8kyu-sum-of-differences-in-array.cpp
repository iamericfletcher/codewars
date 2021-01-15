/*
Name: Sum of differences in array
Link: https://www.codewars.com/kata/5b73fe9fb3d9776fbf00009e
*/

#include <vector> // std::vector, size()
#include <iostream> // std::cout
#include <algorithm> // std::sort
using namespace std;

int sumOfDifference(const std::vector<int>& arr){
  if (arr.size() <= 1){
    return 0;
    return 0;
  } else {
    int total = 0;
    std::vector<int> arr_order = arr;
    std::sort(arr_order.rbegin(), arr_order.rend());
    for (size_t i = 1; i < arr_order.size(); i++)
    {
      std::cout << arr_order[i-1] << " " << arr_order[i] << std::endl;
      total += (arr_order[i-1] - arr_order[i]);
    }
    return total;
  }
}


int main()
{

  std::vector<int> foo{10, 2, 1};
  int bar;
  bar = sumOfDifference(foo);
  std::cout << bar << std::endl;

}