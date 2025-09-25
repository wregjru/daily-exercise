#define _CRT_SECURE_NO_WARNINGS
#include"string.h"
namespace bit
{
	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			_capacity = n;
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
		}
	}
	void string::push_back(char ch)
	{
		if (_capacity == _size)
		{
			reserve(_capacity == 0 ? 4 : _capacity * 2);
		}
		_str[_size] = ch;
		_size++;
		_str[_size] = '\0';
	}

	string& string::operator+=(char ch)
	{
		string::push_back(ch);
		return *this;
	}
	void string::insert(size_t pos, char ch)
	{
		assert(pos <= _size);
		if (_size == _capacity)
		{
			int _new = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(_new);
		}
		
		for (size_t i = _size; i > pos; i--) {
			_str[i] = _str[i - 1];  // 从后往前移动
		}
		_str[pos] = ch;  // 插入新字符
		_size++;
		_str[_size] = '\0';  // 添加结束符
		
	}
	
}
