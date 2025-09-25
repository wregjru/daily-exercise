#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<assert.h>
using namespace std;
namespace bit
{
	class string
	{
	public:
		typedef char* iterator;
		string(const char* str = "")//这里const，*都不能少。由于“hello”默为const，char*才为字符串
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_size + 1];
			strcpy(_str, str);
		}
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}
		size_t size()
		{
			return _size;
		}
		char& operator[](size_t pos)//注意，这里要拷贝
		{
			return _str[pos];
		}
		void reserve(size_t n);
		void push_back(char ch);
		string& operator+=(char ch);
		void insert(size_t pos, char ch);
		

		
	private:
		char* _str ;
		size_t _size;
		size_t _capacity;
		static const size_t npos = -1;
		/*char* _str = nullptr;
		size_t _size=0;
		size_t _capacity=0;*/
	};
}