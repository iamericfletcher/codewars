
#include <iostream>
std::string boolean_to_string(bool b){
    // test if the bool b argument is equal to true.
    if (b == true){
        // If true, return string literal true. 
        return "true";
        // If false, return string literal false. 
    } else {
        return "false";
    }
}

int main()
{
    bool b = false;
    std::string foo;
    foo = boolean_to_string(b);
    std::cout << foo << std::endl;
    return 0;
}
