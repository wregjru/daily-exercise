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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;


int n;
string s[30];
int gone[30];
int ret;

void dfs(string pa)
{
	if (pa.size() > ret)ret = pa.size();
	for (int i = 1; i <= n; i++)
	{
		string mo = s[i];
		if (gone[i] >= 2)continue;
		int c1 = pa.size() - 1;
		int c2 = 0;
		while (c1 >= 1 && c2 < mo.size() - 1)
		{
			if (pa.substr(c1) == mo.substr(0, c2 + 1))
			{
				gone[i]++;
				dfs(pa + mo.substr(c2 + 1));
				gone[i]--;
			}
			c1--; c2++;
		}
	}
}


int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	char ch; cin >> ch;
	for (int i = 1; i <= n; i++)
	{
		if (s[i][0] == ch)
		{
			gone[i]++;
			dfs(s[i]);
			gone[i]--;
		}
	}
	cout << ret << endl;
	return 0;
}





//int num[10];
//bool dp[1010];
//int ma[6] = { 1,2,3,5,10,20 };
//int main()
//{
//	for (int i = 1; i <= 6; i++)
//	{
//		cin >> num[i];
//	}
//	int sum = 0;
//	for (int i = 1; i <= 6; i++)
//	{
//		sum += i * num[i];
//	}
//	dp[0] = true;
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = sum; j >= 1; j--)
//		{
//			for (int k = 1; k <= num[i] && k * ma[i - 1] <= j; k++)
//			{
//				if (dp[j - k * ma[i - 1]] == true)
//				{
//					dp[j] = true;
//					continue;
//				}
//			}
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= sum; i++)
//	{
//		if (dp[i] == true)ret++;
//	}
//	cout << ret << endl;
//	return 0;
//}




//int n;
//int num[220];
//ll dp[220][220];
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		num[i + n] = num[i];
//	}
//	for (int gap = 3; gap <= n+1; gap++)//注意是n+1
//	{
//		for (int i = 1; i + gap - 1 <= 2*n; i++)
//		{
//			int j = i + gap - 1;
//			for (int k = i + 1; k < j; k++)
//			{
//				dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + num[i] * num[j] * num[k]);
//			}
//		}
//	}
//	ll ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, dp[i][i + n]);
//	}
//	cout << ret << endl;
//	return 0;
//}


//int n; int ret;
//string p;
//string s[30];
//int gone[30];
//
//void dfs(string path)
//{
//	ret = max((size_t)ret, path.size());
//	for (int i = 1; i <= n; i++)
//	{
//		if (gone[i] >= 2)continue;
//		int cur1 = path.size() - 1;
//		int cur2 = 0;
//		while (cur1 >= 1 && cur2 < s[i].size()-1)
//		{
//			if (path.substr(cur1) == s[i].substr(0, cur2 + 1))
//			{
//				gone[i]++;
//				dfs(path + s[i].substr(cur2 + 1));
//				gone[i]--;
//			}
//			cur1--; cur2++;
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s[i];
//	}
//	char ch; cin >> ch;
//	for (int i = 1; i <= n; i++)
//	{
//		if (s[i][0] == ch)
//		{
//			gone[i]++;
//			dfs(p);
//			gone[i]--;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}



//unordered_map<int, string> str;
//int n;
//int tu[30][30];//单词i到j增加的字母数
//int used[30];
//int in[30][30];//入度
//int ret;
//int en;//末尾单词
//int r;
//void dfs(int s)
//{
//	bool flag = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (tu[s][i] != -1&&used[i]<=2)
//		{
//			flag = 1;
//			ret += tu[s][i];
//			used[i]++;
//			dfs(i);
//			used[i]--;
//		}
//	}
//	if (flag == 0)
//	{
//		r = max(r, ret);
//		return;
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		string s; cin >> s;
//		str[i] = s;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int s = min(str[i].size(), str[j].size());
//			int pos = 0;
//			if (i == 5 && j == 5)
//			{
//				int eeeee = 1;
//			}
//			/*while (pos<s&&str[i][str[i].size() - 1 - pos] == str[j][pos])
//			{
//				pos++;
//			}*/
//			int flag = 1;
//			for (int k = 0; k <=s; k++)
//			{
//				for (int l = 0; l < k; l++)
//				{
//					if (str[i][str[i].size() - k + l] != str[j][l])
//					{
//						flag = 0;
//						break;
//					}
//				}
//				if (flag == 1)
//				{
//					pos = s; break;
//				}
//			}
//			if (pos == 0)
//			{
//				tu[i][j] = -1;
//			}
//			else 
//			{
//				tu[i][j] = str[j].size() - pos;
//				in[i][j]++;
//			}
//
//		}
//	}
//
//
//	for (int i = 1; i <= n; i++)
//	{
//		used[i]++;
//		ret = str[i].size();
//		dfs(i);
//		ret = 0;
//		used[i]--;
//	}
//	cout << r << endl;
//	return 0;
//}


//int n;
//int num[100010];
//int cnt;
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num[i];
//		if (num[i] == i)cnt++;
//	}
//	if (cnt == n)
//	{
//		cout << n << endl; return 0;
//	}
//	for (int i = 0; i <= n; i++)
//	{
//		if (num[i] != i && num[num[i]] == i)
//		{
//			cout << cnt + 2 << endl;
//			return 0;
//		}
//	}
//	cout << cnt + 1 << endl;
//	return 0;
//}
