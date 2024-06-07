#include <bits/stdc++.h>
using namespace std;

long long power(long long a, long long b, long long m)
{
	long long r = 1;
	a %= m;
	for (int i = 0; i < b; i++)
	{
		r *= b;
		r %= m;
	}
	return r;
}
