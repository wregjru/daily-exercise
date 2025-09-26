#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<assert.h>
namespace bit
{
	class string
	{
		typedef char* iterator;
	public:
		string(const char* str = "")
		{
			_size = strlen(str);
			_str = new char[_size+1];
			_capacity = _size;
			strcpy(_str, str);

		}
		string(string &str)
		{
			_str = new char[str._size];
			_capacity = str._capacity;
			_size = str._size;
			strcpy(_str, s._str);
		}
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		string& operator +=(char ch)
		{
			if (_size == _capacity)
			{

			}
		}

	private:
		char* _str;
		int _size;
		int _capacity;
	};
}