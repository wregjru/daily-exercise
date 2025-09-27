#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	
	int n = 5;
	vector<vector<int>> vv(n);
	for (int i = 0; i < n; i++)
	{
		vv[i].resize(i + 1);
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				vv[i][j] = 1;
			else
			{
				vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
			}
		}
		
	}
	return 0;
}
//vector<int>arr(3);
	//for (int i = 0; i < arr.size(); i++)
	//{
	//	cout << arr[i];
	//}
	///*for (auto& t : arr)
	//{
	//	cout << t;
	//}*/
	//int a[4] = { 1,5,2,7 };
	//vector<int>arr2(a + 2, a + 4);
	//for (int i = 0; i < arr2.size(); i++)
	//{
	//	cout << arr2[i];
	//}