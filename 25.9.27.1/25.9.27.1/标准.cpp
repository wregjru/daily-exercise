//#define _CRT_SECURE_NO_WARNINGS
//#pragma once
//#include<assert.h>
//
//namespace bit
//{
//	template<class T>
//	class vector
//	{
//	public:
//		typedef T* iterator;
//		typedef const T* const_iterator;
//
//		iterator begin()
//		{
//			return _start;
//		}
//
//		iterator end()
//		{
//			return _finish;
//		}
//
//		const_iterator begin() const
//		{
//			return _start;
//		}
//
//		const_iterator end() const
//		{
//			return _finish;
//		}
//
//		void reserve(size_t n)
//		{
//			if (n > capacity())
//			{
//				size_t old_size = size();
//				T* tmp = new T[n];
//				memcpy(tmp, _start, size() * sizeof(T));
//				delete[] _start;
//
//				_start = tmp;
//				_finish = tmp + old_size;
//				_end_of_storage = tmp + n;
//			}
//		}
//
//		size_t size() const
//		{
//			return _finish - _start;
//		}
//
//		size_t capacity() const
//		{
//			return _end_of_storage - _start;
//		}
//
//		bool empty()
//		{
//			return _start == _finish;
//		}
//
//		void push_back(const T& x)
//		{
//			// 扩容
//			if (_finish == _end_of_storage)
//			{
//				reserve(capacity() == 0 ? 4 : capacity() * 2);
//			}
//
//			*_finish = x;
//			++_finish;
//		}
//
//		void pop_back()
//		{
//			assert(!empty());
//			--_finish;
//		}
//
//		iterator insert(iterator pos, const T& x)
//		{
//			// 扩容
//			if (_finish == _end_of_storage)
//			{
//				size_t len = pos - _start;
//				reserve(capacity() == 0 ? 4 : capacity() * 2);
//				pos = _start + len;
//			}
//
//			iterator end = _finish - 1;
//			while (end >= pos)
//			{
//				*(end + 1) = *end;
//				--end;
//			}
//			*pos = x;
//
//			++_finish;
//
//			return pos;
//		}
//
//		T& operator[](size_t i)
//		{
//			assert(i < size());
//
//			return _start[i];
//		}
//
//		const T& operator[](size_t i) const
//		{
//			assert(i < size());
//
//			return _start[i];
//		}
//
//	private:
//		iterator _start = nullptr;
//		iterator _finish = nullptr;
//		iterator _end_of_storage = nullptr;
//	};
//
//	/*void print_vector(const vector<int>& v)
//	{
//		vector<int>::const_iterator it = v.begin();
//		while (it != v.end())
//		{
//			cout << *it << " ";
//			++it;
//		}
//		cout << endl;
//
//		for (auto e : v)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//	}*/
//
//	template<class T>
//	void print_vector(const vector<T>& v)
//	{
//		// 规定，没有实例化的类模板里面取东西，编译器不能区分这里const_iterator
//		// 是类型还是静态成员变量
//		//typename vector<T>::const_iterator it = v.begin();
//		auto it = v.begin();
//		while (it != v.end())
//		{
//			cout << *it << " ";
//			++it;
//		}
//		cout << endl;
//
//		for (auto e : v)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//	}
//
//	void test_vector1()
//	{
//		vector<int> v;
//		v.push_back(1);
//		v.push_back(2);
//		v.push_back(3);
//		v.push_back(4);
//		v.push_back(5);
//
//		for (size_t i = 0; i < v.size(); i++)
//		{
//			cout << v[i] << " ";
//		}
//		cout << endl;
//
//		vector<int>::iterator it = v.begin();
//		while (it != v.end())
//		{
//			cout << *it << " ";
//			++it;
//		}
//		cout << endl;
//
//		for (auto e : v)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//
//		print_vector(v);
//
//		vector<double> vd;
//		vd.push_back(1.1);
//		vd.push_back(2.1);
//		vd.push_back(3.1);
//		vd.push_back(4.1);
//		vd.push_back(5.1);
//
//		print_vector(vd);
//	}
//
//	void test_vector2()
//	{
//		vector<int> v;
//		v.push_back(1);
//		v.push_back(2);
//		v.push_back(3);
//		v.push_back(4);
//		//v.push_back(5);
//
//		print_vector(v);
//
//		v.insert(v.begin() + 2, 30);
//		print_vector(v);
//
//		int x;
//		cin >> x;
//		auto p = find(v.begin(), v.end(), x);
//		if (p != v.end())
//		{
//			// insert以后p就是失效，不要直接访问，要访问就要更新这个失效的迭代器的值
//			//v.insert(p, 40);
//			//(*p) *= 10;
//
//			p = v.insert(p, 40);
//			(*(p + 1)) *= 10;
//		}
//		print_vector(v);
//	}
//}