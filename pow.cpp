#include <bits/stdc++.h>
using namespace std;

long long pow(long long a, long long b, long long m)
{
	long long r = 1;
	a %= m;
	for (int i = 0; i < b; i++)
	{
		r *= a;
		r %= m;
	}
	return r;
}

long long pow(long long a, long long b)
{
	long long r = 1;
	for (int i = 0; i < b; i++)
	{
		r *= a;
	}
	return r;
}