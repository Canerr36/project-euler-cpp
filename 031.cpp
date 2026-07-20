#include <iostream>



int main()
{
   
    
    int coin[8] = { 1,2,5,10,20,50,100,200 };
    long long dp[201] = {0};

    dp[0] = 1;

    for (int i = 0; i < 8; i++)
    {
        for (int j = coin[i]; j <= 200; j++)
        {
            dp[j] += dp[j - coin[i]];
        }
    }

    std::cout << dp[200];

    return 0;



}