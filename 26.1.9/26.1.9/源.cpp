#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include <cstring>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
#include<iomanip>
#include <chrono>
using namespace std;
//typedef __int128 ll;
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;
//ios::sync_with_stdio(false);
//cin.tie(nullptr);



int longestDecomposition(string text) 
{
	int n = text.size();
	text = " " + text;
	vector<int> dp(n + 1, 1);
	int l = 1; int r = n;
	int cnt = 0;
	while (l < r)
	{
		for (int len = 1; len <= n; len++)
		{
			cout << text.substr(l, len);
			cout << text.substr(r - len + 1, len) << endl;
			if (text.substr(l, len) == text.substr(r - len + 1, len))
			{
				l += len; r -= len;
				if (l <= r)
					cnt += 2;
				else cnt++;
				break;
			}
		}
	}
	if (l == r)cnt++;
	return cnt;
	
}

signed main()
{
	//string text = "abghghab";
	string text = "elvtoelvto";
	cout << longestDecomposition(text);
	return 0;
}