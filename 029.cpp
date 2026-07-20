#include <iostream>
#include <math.h>
#include <set>


int main()
{
    std::set<double> s;


    for (int i = 2; i <= 100; i++) {
        for (int j = 2; j <= 100; j++) {

           // std::cout<<i<<"^"<<j<<" :  " << pow(i, j) << std::endl;
            s.insert(pow(i, j));
        }
    }
    std::cout << s.size();


}

