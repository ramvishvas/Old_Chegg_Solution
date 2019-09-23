
#include <iostream>
#include <string>
using namespace std;
 int main()
{
 std::cout << "Enter string:" << flush;
 std::string s;
 std::getline(std::cin, s);
 std::cout << "the string was: " << s << std::endl;
}