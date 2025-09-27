#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<iostream>
#include<vector>
using namespace std;
namespace bit
{
	template<class T>
	class vector	
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}
		const_iterator begin() const
		{
			return _start;
		}
		const_iterator end() const
		{
			return _finish;
		}
		void reserve(size_t n)
		{
			if (n > capacity())
			{
				T* tmp = new T[n];
				memcpy(tmp, _start, size() * sizeof(T));
				size_t old = size();
				delete[] _start;
				_start = tmp;
				_finish = tmp + old;
				_end_of_storage = tmp + n;
				 
			}
		}
		size_t size() const
		{
			return _finish - _start;
		}
		size_t capacity() const
		{
			return _end_of_storage - _start;
		}
		bool empty()
		{
			return _finish == _start;
		}
		void push_back(const T& x)
		{
			if (_finish == _end_of_storage)
			{
				reserve(size() == 0 ? 4 : 2 * size());
			}
			*_finish = x;
			_finish++;
		}
		void pop_back()
		{
			assert(!empty());
			_finish--;
		}
		iterator insert(iterator pos, const T& x)
		{
			int len = size();
			if (_finish == _end_of_storage)
			{
				reserve(size() == 0 ? 4 : 2 * size());
				pos = _start + len;//新开数组，老地址会失效
			}
			
			iterator n= _finish;
			while (n > pos)
			{
				*n = *(n - 1);
				n--;
			}
			_finish++;
			*pos = x;
			return pos;

		}
		T& operator[](size_t i)
		{
			assert(i < size());
			return *(_start + i);
		}
		const T& operator[](size_t i) const
		{
			assert(i < size());
			return *(_start + i);
		}
	private:
		iterator _start=nullptr;
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;
		
	};
	template<class T>
	void print1(vector<T>& s)
	{
		auto it = s.begin();
		while (it != s.end())
		{
			cout << *it << " ";
			++it;
		}
	}
}
