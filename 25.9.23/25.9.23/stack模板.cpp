#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstdlib>
using namespace std;
template<class T>
class stack
{
public:
	stack(int capacity = 4)
	{
		T* n = new T[capacity];
		_capacity = capacity;
		_data = 0;
		arr = n;
	}
	~stack()
	{

	}
	void push(T n = 0)
	{
		if (_capacity == _data)
		{
			_capacity = _capacity * 2;
			T* k = (T*)realloc(arr, _capacity * sizeof(T));
			cop(arr, k, _data);
			arr = k;
		}
		arr[_data] = n;
		_data++;
	}
	void cop(T* arr, T* k, int _data)//½«arr¿½±´µ½n
	{
		for (int i = 0; i < _data; i++)
		{
			k[i] = arr[i];
		}

	}
private:
	T* arr;
	int _capacity;
	int _data;
};


int main()
{
	stack<int>s;
	s.push(1);
	return 0;
}