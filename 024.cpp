#include <iostream>
#include <vector>
long long factorial(int n);


int main()
{
    std::vector<int> digits =
    {
        0,1,2,3,4,5,6,7,8,9
    };

    long long k = 999999;

    while (!digits.empty())
    {
        long long f = factorial(digits.size() - 1);

        int index = k / f;

        std::cout << digits[index];

        digits.erase(digits.begin() + index);

        k %= f;
    }

    return 0;
}

long long factorial(int n)
{
    long long f = 1;

    for (int i = 2; i <= n; i++)
        f *= i;

    return f;
}