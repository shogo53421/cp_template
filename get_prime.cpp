#include <bits/stdc++.h>
using namespace std;

vector<long long> get_prime(long long num)
{
    vector<long long> prime;
    if (num >= 2)
    {
        prime.push_back(2);
    }
    for (long long i = 3; i < num; i += 2)
    {
        bool flag = true;
        for (int j = 1; j < prime.size(); j++)
        {
            if (prime[j] > (long long)sqrt(i))
            {
                break;
            }
            if (i % prime[j] == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            prime.push_back(i);
        }
    }
    return prime;
}