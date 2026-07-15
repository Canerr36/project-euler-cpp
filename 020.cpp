#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;



int main()
{
    cpp_int faktoriyel = 1;

    for (int i = 1; i <= 100; i++)
        faktoriyel *= i;

    std::cout << faktoriyel << std::endl;


}