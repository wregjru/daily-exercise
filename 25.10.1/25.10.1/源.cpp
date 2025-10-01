#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int all = 0;//星球个数
	int p = 0;//点的个数
	cin >> all >> p;
	if (p == 1)
	{
		cout << 0;
		return 0;
	}

	long long ret = 0;
	int a1 = 0;
	int a2 = 0;
	cin >> a1 >> a2;
	int b = a1;
	int z = min(abs(a1 - a2), all - abs(a1 - a2));
	ret += z;
	for (int i = 2; i < p; i++)
	{

		a1 = a2;
		cin >> a2;
		int u= min(abs(a1 - a2), all - abs(a1 - a2));
		ret += u;
	}
	ret+= min(abs(a2 - b), all - abs(b - a2));
	cout << ret;
	return 0;
}
//#include<map>
//#include<string>
//#include<iostream>
//using namespace std;
//int main()
//{
//	map<string, int> m;
//	m["a"] = 1;
//	m["b"] = 2;
//	m["c"] = 3;
//	m.insert({"a", 100});//这行哪错了
//	auto e=m.find("b");
//	if (e != m.end())
//	{
//		e->second++;
//	}
//	cout << m.size() << endl;
//	return 0;
//}