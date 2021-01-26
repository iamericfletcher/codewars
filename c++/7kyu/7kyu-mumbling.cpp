/*
Name: Mumbling
Link: https://www.codewars.com/kata/5667e8f4e3f572a8f2000039/train/cpp
*/

#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string;



class Accumul
{
public:
    static std::string accum(const std::string &s) {
        string output;
        for (size_t i = 0; i < s.length(); i++)
        {
            output.append("-");
            output.append(string(1, toupper(s[i])));
            output.append(string(i, tolower(s[i])));
        }
        return output.substr(1, output.length());
    }
};

int main()
{
    string foo = {"Hello"};
    string bar;
    bar = Accumul::accum(foo);
    cout << bar << endl;
}

