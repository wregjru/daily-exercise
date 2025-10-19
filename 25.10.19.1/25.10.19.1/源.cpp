#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
#include<iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;



int main()
{
	int T; cin >> T;
	while (T--)
	{
		int t; cin >> t;
		if (t % 4 == 0)cout << "Roy wins!" << endl;
		else cout << "October wins!" << endl;
	}
	return 0;
}