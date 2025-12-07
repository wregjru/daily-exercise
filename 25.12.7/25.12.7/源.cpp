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



int num[200010];
struct node
{
	int bl;
	int ge;
}sow[200010], zeo[200010],nzeo[200010];
int pos;
int pos2;


bool cmp2(node& a, node& b)
{
	if(a.bl!=b.bl)
	return a.bl < b.bl;
	return a.ge < b.ge;
}
void solve()
{
	int n; cin >> n;
	int k; cin >> k;
	multiset<int> se;
	pos = pos2 = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		se.insert(num[i]);
	}
	for (int i = 1; i <= k; i++)
	{
		cin >> sow[i].bl;
	}
	for (int i = 1; i <= k; i++)
	{
		cin >> sow[i].ge;
	}

	int ret = 0;
	//priority_queue<int, vector<int>, cmp> heap;
	sort(num + 1, num + n + 1);
	sort(sow + 1, sow + 1 + k, cmp2);

	for (int i = 1; i <= k; i++)
	{
		if (sow[i].ge == 0)
		{
			nzeo[++pos2].bl = sow[i].bl;
			nzeo[pos2].ge = sow[i].ge;
		}
		else
		{
			zeo[++pos].bl = sow[i].bl;
			zeo[pos].ge = sow[i].ge;
		}
	}
	for (int i = 1; i <= pos; i++)
	{
		auto it = se.lower_bound(zeo[i].bl);
		//--it;
		int t = *it;
		if (it == se.end())
		{
			continue;
		}
		se.erase(it);
		ret++;
		se.insert(max(t,zeo[i].ge));
	}
	for (int i = 1; i <= pos2; i++)
	{
		auto it = se.lower_bound(nzeo[i].bl);
		if (it == se.end())
		{
			continue;
		}
		se.erase(it);
		ret++;
	}
	cout << ret << endl;
}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}








//int num[200010];
//
//void solve()
//{
//	int k; cin >> k;
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int ret = num[1];
//	int col = 1;
//	for (int i = 2; i <= k; i++)
//	{
//		if (col == n)
//		{
//			ret += (k - i + 1) * num[col];
//			break;
//		}
//		if (ret >= num[col + 1])
//		{
//			col++;
//			ret += num[col];
//		}
//		else
//		{
//			ret += num[col];
//		}
//
//	}
//	cout << ret << endl;
//}
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}









//int num[200010]; 
//void solve()
//{
//    int k, n;
//    cin >> k >> n;
//    for (int i = 1; i <= n; i++)cin >> num[i];
//    int row = 1;
//    int col = 1;
//    int st = num[1];  
//
//    while (col < n && row < k)
//    {
//        int nx = col + 1;
//
//        int t = 0;
//        if (st < num[nx])
//        {
//            int need = num[nx] - st; 
//            t = (need + num[col] - 1) / num[col];   
//        }
//
//        if (row + t + 1 > k)
//            break; 
//
//        st += t * num[col];
//        row += t;
//
//        st += num[nx];
//        row += 1;
//        col = nx;
//    }
//    st += (k - row) * num[col];
//    cout << st << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    int t;
//    cin >> t;
//    while (t--) solve();
//    return 0;
//}




//3 4 4 1 1 2 3 2 6 1 1 1 4 4 5 5 2 1 2






//int num[200010];
//int f[200010];
//int shu[200010];
//int pos;
//int zer[200010];
//int p;
//int tm[200010];
//int num2[200010];
//int pp2;
//int f2[200010];
//int toj(int l, int r)
//{
//	f2[l - 1] = 0;
//	for (int i = l; i <= r; i++)
//	{
//		f2[i] = f2[i - 1] + num[i];
//	}
//	pp2 = 0;
//	num2[pp2++] = 0;
//	unordered_map<int, int> ma2;
//	ma2[0] = 1;
//	for (int i = l; i <= r; i++)
//	{
//		if (ma2[f2[i]] == 0)
//		{
//			num2[++pp2] = f2[i];
//
//		}
//		ma2[f2[i]]++;
//	}
//	int ret = 0;
//	for (int i = 1; i <= pp2; i++)
//	{
//		if (ma2[num2[i]] == 0 || ma2[num2[i]] == 1)continue;
//		ret += (ma2[num2[i]] * (ma2[num2[i]] - 1)) / 2;
//	}
//	return ret;
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	int k; cin >> k;
//	pos = 0;
//	p = 0;
//	unordered_map<int, int> ma;
//	for (int i = 0; i <= n + 2; i++)
//	{
//		f[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		if (s < k)num[i] = -1;
//		if (s == k)
//		{
//			num[i] = 0;
//			zer[++p] = i;
//		}
//		if (s > k)num[i] = 1;
//	}
//	int c1 = 0;
//	ma[0] = 1;
//	shu[++pos] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = f[i - 1] + num[i];
//		if (ma[f[i]] == 0)
//		{
//			shu[++pos] = f[i];
//		}
//		ma[f[i]]++;
//	}
//	for (int i = 1; i <= pos; i++)
//	{
//		int t = ma[shu[i]];
//		if (t == 0 || t == 1)continue;
//		c1 += (t * (t - 1)) / 2;
//	}
//	if (p == 0)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	int c2 = 0;
//	c2 += toj(1, zer[1] - 1);
//	for (int i = 1; i < p; i++)
//	{
//		c2 += toj(zer[i] + 1, zer[i + 1] - 1);
//	}
//	c2 += toj(zer[p] + 1, n);
//	cout << c1 - c2 << endl;
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}







//int num[100010];
//int cha[100010];
//
//void solve()
//{
//	int n; cin >> n;
//	int k = 0; cin >> k;
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		cha[i] = num[i] - num[i - 1];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (cha[i] < 0)
//		{
//			ret += abs(cha[i]);
//			if(i+k<=n)cha[i + k] -= abs(cha[i]);
//			cha[i] = 0;
//			
//		}
//	}
//	cout << ret << endl;
//}
//
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}






//int k; int n;
//cin >> k >> n;
//for (int i = 1; i <= n; i++)
//{
//	cin >> num[i];
//}
//int pre = 1;//当前在第pre列
//int ret = num[1];//体力
//int p = 0;//走了几步
//int kp = k - 1;
//for (int j = 1; j < n; j++)
//{
//	if (p > kp)
//	{
//		break;
//	}
//}




//int num[200010];
//int pos;
//void solve()
//{
//	int n; cin >> n;
//	int m; cin >> m;
//	unordered_map<int, int> ma;
//	pos = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		int s; cin >> s;
//		if (ma[s] == 0)
//		{
//			num[++pos] = s;
//		}
//		ma[s]++;
//	}
//	if (num[1] == 0)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	int ret = 0;
//	int p = 0;
//	int i = 1;
//	while (p < n)
//	{
//		if (p + ma[num[i]] >= n)
//		{
//			ret += (n - p) * num[i];
//			cout << ret << endl;
//			return;
//		}
//		if (i == pos)
//		{
//			ret += (n - p) * num[i];
//			cout << ret << endl;
//			return;
//		}
//		if (i == m)
//		{
//			ret += num[i] * (n - p);
//			p = n;
//			
//		}
//		else
//		{
//			p += max((num[i + 1] - 1-ret) / num[i] + 1, ma[num[i]]);
//			ret += max((num[i + 1] - 1-ret) / num[i] + 1, ma[num[i]]) * num[i];
//			i++;
//		}
//		
//	}
//	cout << ret << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}


/*
1

5 5
1 2 3 4 5
*/



//int num[200010];
//int f[200010];
//int g[200010];
//int cha[200010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	num[0] = 0x3f3f3f3f3f3f3f3f;
//	num[n + 1] = 0x3f3f3f3f3f3f3f3f;
//	for (int i = 0; i <= n + 1; i++)
//	{
//		f[i] = g[i] = cha[i] = 0;
//	}
//	stack<int> st;
//	for (int i = 0; i <= n + 1; i++)
//	{
//		while (st.size() && num[st.top()] <= num[i])
//		{
//
//			
//			st.pop();
//			
//		}
//		if (st.size())f[i] = st.top();
//		st.push(i);
//		
//	}
//	stack<int> st2;
//	for (int i = n+1; i >= 0; i--)
//	{
//		while (st2.size() && num[st2.top()] <= num[i])
//		{
//
//			
//			st2.pop();
//
//		}
//		if (st2.size())g[i] = st2.top();
//		st2.push(i);
//		
//	}
//	int sss = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cha[f[i] + 1]++;
//		cha[g[i]]--;
//	}
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += cha[i];
//		cout << sum << " ";
//	}
//	cout << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}




//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	num[0] = 0x3f3f3f3f3f3f3f3f;
//	num[n + 1] = 0x3f3f3f3f3f3f3f3f;
//	for (int i = 0; i <= n + 1; i++)
//	{
//		f[i] = g[i] = cha[i] = 0;
//	}
//	stack<int> st;
//	unordered_map<int, int> ma;
//	for (int i = 0; i <= n + 1; i++)
//	{
//		while (st.size() && num[st.top()] <= num[i])
//		{
//			if (num[st.top()] == num[i] && ma[num[st.top()]] == 1)
//			{
//				break;
//			}
//			ma[num[st.top()]]--;
//			st.pop();
//
//		}
//		if (st.size())f[i] = st.top();
//		st.push(i);
//		ma[num[i]]++;
//	}
//	stack<int> st2;
//	unordered_map<int, int> ma2;
//	for (int i = n + 1; i >= 0; i--)
//	{
//		while (st2.size() && num[st2.top()] <= num[i])
//		{
//			if (num[st2.top()] == num[i] && ma[num[st2.top()]] == 1)
//			{
//				break;
//			}
//			ma2[num[st2.top()]]--;
//			st2.pop();
//
//		}
//		if (st2.size())g[i] = st2.top();
//		st2.push(i);
//		ma2[num[i]]++;
//	}
//	int sss = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cha[f[i] + 1]++;
//		cha[g[i]]--;
//	}
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += cha[i];
//		cout << sum << " ";
//	}
//	cout << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//int getr(string&str)
//{
//	auto p = str.find("fire");
//	int a = 0;
//	while (p != string::npos)
//	{
//		a++;
//		p = str.find("fire", p + 1);
//	}
//	int b = 0;
//	auto p2 = str.find("water");
//	while (p2 != string::npos)
//	{
//		b++;
//		p2 = str.find("water", p2 + 1);
//	}
//	int c = 0;
//	auto p3 = str.find("wind");
//	while (p3 != string::npos)
//	{
//		c++;
//		p3 = str.find("wind", p3 + 1);
//	}
//	return a + b * c;
//}
//
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	int m; cin >> m;
//	string a; cin >> a;
//	string b; cin >> b;
//	if (getr(a) > getr(b))
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}










//int num[200010];
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s = num[i];
//		string a = to_string(s);
//		int r = num[i];
//		for (int k = 0; k < a.size() - 1; k++)
//		{
//			for (int j = k + 1; j <= a.size() - 1; j++)
//			{
//				string b = a;
//				swap(b[k], b[j]);
//				r = max(r, (int)stoi(b));
//			}
//		}
//		ret += r;
//	}
//	cout << ret << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}

/*
1
1
201
*/


//void solve()
//{
//	int x1; int x2; int x3;
//	int y1; int y2; int y3;
//	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//	int p = x2 - x1; int q = y2 - y1;
//	cout << x3 + p << " " << y3 + q << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}




//void solve()
//{
//	int a; int b; cin >> a >> b;
//	int c = a + b;
//	if (c == 350234)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}