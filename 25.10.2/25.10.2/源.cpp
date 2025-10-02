#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
string x; string y;
int a[10087]; int b[10087]; int c[10087];
int la; int lb; int lc;
bool da(string&x,string&y)
{
	if (x.size() != y.size()) return x.size()<y.size();
	else 
	{
		return x < y;
	}
}
void sub(int c[], int a[], int b[])
{
	for (int i = 0; i < lc; i++)
	{
		c[i] += a[i] - b[i];
		if (c[i] < 0)
		{
			c[i + 1]--;
			c[i] += 10;
		}
	}
	while (lc > 1 && c[lc - 1] == 0)lc--;
	/*for (int j = lc - 1; j > 0; j--)
	{
		if (c[j] == 0)
		{
			lc--;
		}

	}*/
	//if (c[lc-1]==0) lc--;
}
int main()
{
	cin >> x >> y;
	if (da(x, y))
	{
		swap(x, y);
		cout << "-";//注意这里的负号
	}
	la = x.size(); lb = y.size(); lc = max(la, lb);
	for (int i = 0; i < la; i++)a[la - 1 - i] = x[i]-'0';
	for (int i = 0; i < lb; i++)b[lb - 1 - i] = y[i]-'0';
	sub(c, a, b);
	for (int i = lc - 1; i >= 0; i--)
		cout << c[i];
	return 0;
}









//void add(vector<int>&z, vector<int> x, vector<int>y,int&lz)
//{
//	for (int i = 0; i < lz; i++)
//	{
//		z[i] += x[i] + y[i];//注意，+=
//		z[i + 1] = z[i] / 10;
//		z[i] %= 10;
//	}
//	if (z[lz]) lz++;
//}
//int main()
//{
//	string a; string b; string c; 
//	cin >> a >> b;
//	int lx = a.size(); int ly = b.size(); int lz = max(lx, ly);
//	vector<int> x(lz); vector<int> y(lz); vector<int> z(lz+1);
//	for (int i = 0; i < lx; i++) x[lx - 1 - i] = a[i] - '0';
//	for (int i = 0; i < ly; i++) y[ly - 1 - i] = b[i] - '0';
//	add(z, x, y, lz);
//	for (int i = lz - 1; i >= 0; i--) cout << z[i];
//	return 0;
//}












//bool isdig(char ch)
//{
//	return ch >= '0' && ch <= '9';
//}
//bool islle(char ch)
//{
//	return ch >= 'a' && ch <= 'z'; 
//}
//void write(char ch1, char ch2, string& ret, int p1, int p2, int p3)
//{
//	string _ret;
//	char t1 = ch1;
//	char t2 = ch2;
//	if (p1 == 2&& islle(t1))
//	{
//		t1 -= 32; t2 -= 32;
//	}
//	if (p1 == 3)
//	{
//		for (int i = 0; i < (ch2 - ch1 - 1)*p2; i++) ret += '*';
//		return;
//	}
//	for (t1 = t1 + 1; t1 < t2; t1++)
//	{
//		for (int i = 0; i < p2; i++)
//		{
//			_ret += t1;
//		}
//	}
//	if (p3 == 2)
//	{
//		reverse(_ret.begin(),_ret.end());
//	}
//	ret += _ret;
//}
//int main()
//{
//	int p1 = 0; int p2 = 0; int p3 = 0;
//	string chu;
//	string ret;
//	cin >> p1 >> p2 >> p3;
//	cin >> chu;
//	for (int i = 0; i < chu.size(); i++)
//	{
//		if (chu[i] != '-'||i==0||i== chu.size() -1) ret += chu[i];
//		else
//		{
//			char ch1 = chu[i - 1]; char ch2 = chu[i + 1];
//			if (ch1 == ch2 - 1)continue;//相邻元素跳过
//			if (isdig(ch1) && isdig(ch2) && ch1 < ch2
//				|| islle(ch1) && islle(ch2) && ch1 < ch2)
//			{
//				write(ch1, ch2, ret, p1, p2, p3);
//
//			}
//			else ret += chu[i];
//		}
//		
//	}
//	cout << ret;
//	return 0;
//
//}
//2 1
//abcs - w1234 - 9s - 4zz
//3 2 1 abcs-w1234-9s-4zz


//int size = 0;
//cin >> size;
//int dy[4] = { 1,0,-1,0 };
//int dx[4] = { 0,1,0,-1 };
//vector<vector<int>> arr(size+1,vector<int>(size+1,0));
//int pos = 0;
//int x = 1; int y = 1;
//for (int i = 1; i <=size * size; i++)
//{
//	arr[x][y] = i;
//	int a = x + dx[pos];
//	int b = y + dy[pos];
//	if (a<1 || a>size || b<1 || b>size || arr[a][b] != 0)
//	{
//		pos = (pos + 1) % 4;
//		a = x + dx[pos];
//		b = y + dy[pos];
//	}
//	x = a; y = b;
//}
//for (int j = 1; j <= size; j++)
//{
//	for (int k = 1; k <= size; k++)
//	{
//		printf("%3d", arr[j][k]);
//	}
//	printf("\n");
//}
//return 0;





//int a = 0;
//cin >> a;
//for (int i = a; i >=0; i--)
//{
//	int input = 0;
//	cin >> input;
//	if (input == 0) continue;
//	//+-号
//	if (i == a)
//	{
//		if (input < 0)
//		{
//			cout << "-";
//		}
//	}
//	else
//	{
//		if (input > 0)cout << "+";
//		else cout << "-";
//	}
//	//数字
//	if (i == 0)
//	{
//		cout << abs(input);
//	}
//	else
//	{
//		if (input == 1 || input == -1)
//		{

//		}
//		else
//		{
//			cout << abs(input);
//		}
//	}
//	//x
//	if (i != 0)
//	{
//		cout << "x";
//	}
//	//^
//	if (i != 0 && i != 1)
//	{
//		cout << "^";
//	}
//	//次方
//	if (i != 0 && i != 1)
//	{
//		cout << i;
//	}


//	

//}
//return 0;


//int b = 0;
//cin >> b;
//if (i != 0)//正负号
//{
//	if (b > 0)
//		cout << "+";
//	else if (b < 0)
//		cout << "-";
//	else
//		continue;
//}
//else
//{
//	if (b < 0)
//		cout << "-";
//}
////if (b == 1)//数字
////{
////	

////}
//if (i < a)
//{
//	if (b != 1 && b != -1)
//	{
//		cout << abs(b);
//	}
//}
//else
//{
//	cout << abs(b);
//}


//if (i < a-2)
//{
//	cout << "x" << "^" << a  - i;
//}
//else if (i == a - 1)
//{
//	cout << "x";
//}
//else
//{

//}



















//int ladderLength(string beginWord, string endWord, vector<string>& wordList)
//{
//    unordered_map<string, int> hash;
//    queue<string> qu;
//    qu.push(beginWord);
//    int ret = 0;
//
//
//    while (!qu.empty())
//    {
//        ret++;
//        int r = qu.size();
//        for (int y = 0; y < r; y++)
//
//        {
//            string a = qu.front();
//            qu.pop();
//            for (int i = 0; i < beginWord.size(); i++)
//            {
//                for (int j = 0; j < 26; j++)
//                {
//                    a[i]++;
//                    for (int k = 0; k < wordList.size(); k++)
//                    {
//                        if (wordList[k] == a && hash[a] != 0)
//                        {
//                            if (a == endWord)
//                            {
//                                return ret;
//                            }
//                            qu.push(a);
//                            hash[a] = 1;
//
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return -1;
//
//}








//int subarraySum(vector<int>& nums, int k)
//{
//    int ret = 0;
//    int n = nums.size();
//    vector<int> dp(n + 1);
//    dp[0] = 0;
//    for (int i = 0; i < nums.size(); i++)
//    {
//        dp[i + 1] = dp[i] + nums[i];
//    }
//    if (dp[dp.size() - 1] == k)
//        ret++;
//    for (int i = 1; i < dp.size() - 1; i++)
//    {
//        if (dp[i] == k)
//            ret++;
//        int r = dp[i] + k;
//        int left = i + 1; int right = dp.size() - 1;
//        while (left < right)
//        {
//            int mid = left + (right - left+1) / 2;
//            if (dp[mid] <= r)
//            {
//                left = mid;
//            }
//            else
//            {
//                right = mid-1;
//            }
//        }
//        if (dp[left] == r)
//            ret++;
//    }
//    return ret;
//}
//int main()
//{
//    vector<int> i = { 1,1,1 };
//    int r=subarraySum(i, 2);
//    return 0;
//}














//vector<int> findAnagrams(string s, string p)
//{
//    vector<int> ret;
//    if (s.size() < p.size())
//    {
//        return ret;
//    }
//
//    int n = p.size();
//    unordered_map<char, int> hash;
//    unordered_map<char, int> hash1;
//    for (int r = 0; r < p.size(); r++)
//    {
//        hash1[p[r]]++;
//    }
//    if (s.size() == p.size())
//    {
//        for (int r = 0; r < p.size(); r++)
//        {
//            hash[s[r]]++;
//        }
//        int flag = 1;
//        for (int d = 0; d < p.size(); d++)
//        {
//            if (hash[p[d]] != hash1[p[d]])
//            {
//                flag = 0;
//            }
//
//        }
//        if (flag == 1)
//        {
//
//            return { 0 };
//        }
//        else
//            return ret;
//    }
//    hash[s[0]]++;
//    if (p.size() == 1)
//    {
//        if (s[0] == p[0])
//        {
//            ret.push_back(0);
//        }
//    }
//    int slow = 0; int fast = 0;
//    while (fast < s.size())
//    {
//        fast++;
//        hash[s[fast]]++;
//        if (fast - slow == p.size())
//        {
//            hash[s[slow]]--;
//            slow++;
//        }
//        if (fast - slow + 1 == p.size())
//        {
//            int flag = 1;
//            for (int d = 0; d < p.size(); d++)
//            {
//                if (hash[p[d]] != hash1[p[d]])
//                {
//                    flag = 0;
//                }
//
//            }
//            if (flag == 1)
//            {
//                ret.push_back(slow);
//            }
//        }
//
//    }
//    return ret;
//
//}
//int main()
//{
//    vector<int> s = findAnagrams("abbc", "abcb");
//    return 0;
//}