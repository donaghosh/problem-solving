#include <bits/stdc++.h>
using namespace std;
// #define dona DONA
#define ll long long int // 64-bit integer -> 2^63 ~ 10^18 

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	#ifndef dona
		// int n = INT_MAX;  //2^31 - 1
		ll n = 1e18; //= 10^18, 2e18 = (2*10)^18
		cin >> n;
		cout << n;
	#endif

	return 0;
}
