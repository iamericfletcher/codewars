#include <iostream>

int opposite(int number){
    int output = (number > 0) ? number * -1 : number * -1; 
    std::cout << output << std::endl;
    return 0;
}


int main()
{
    int foo = -10;
    int bar;
    bar = opposite(foo);
}