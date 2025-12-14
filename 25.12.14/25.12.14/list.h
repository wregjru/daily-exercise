#include<iostream>
#include<assert.h>


namespace bit
{
	template<class T>
	struct list_node
	{
		T _data;
		list_node* next;
		list_node* prev;
		list_node(const T& data = T())
			:_data(data)
			, next(nullptr)
			, prev(nullptr)
		{
		}
	};
	template<class T>
	struct list_iterator
	{
		list_node<T>* _node;
		list_iterator(list_node<T>* node)
			:_node(node)
		{
		}
		T operator*()
		{
			return _node->_data;
		}
		list_iterator& operator++()
		{
			_node = _node->next;
			return *this;
		}
		list_iterator& operator--()
		{
			_node = _node->prev;
			return *this;
		}
		T operator->()
		{
			return &_node->_data;
		}
	};
	template<class T>
	class list
	{
	public:
		typedef list_iterator iterator;
		iterator begin()
		{
			return _head->next;
		}
		iterator end()
		{
			return _head;
		}
	private:
		list_node<T> _head;
		size_t _size;
	};
}
