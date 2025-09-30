#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
	
	map<string,int> a;
	a["q"] = 1;
	cout<<a.size();
	pair<string, string> kv1("first", "µÚÒ»¸ö");
	a.insert(kv1);
	return 0;
}
//set<int> a{ 2,6,1,9,4,3,7 };
	//auto i = a.begin();
	///*while (i !=a.end())
	//{
	//	cout << *i ;
	//	i++;
	//}*/
	//for (auto e: a)
	//{
	//	cout << e ;
	//}
	//cout << endl;
	//a.erase(3);
	//for (auto e : a)
	//{
	//	cout << e;
	//}
	//cout << endl;
	//auto pos = a.find(4);
	//a.erase(pos);
	//for (auto e : a)
	//{
	//	cout << e;
	//}
	//cout << endl;
	//cout << a.count(6);