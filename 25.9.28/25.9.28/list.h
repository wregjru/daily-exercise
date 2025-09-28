#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
namespace bit
{
	template<class T>
	struct list_node
	{
		T _data;
		list_node<T>* _next;
		list_node<T>* _prev;
		list_node(const T& data=T())
			:_data(data)
			,_next=nullptr
			,_prev = nullptr
		{}
	};
	template<class T>
	struct list_iterator
	{
		typedef list_node<T> Node;
		typedef list_iterator<T> iterator;
		Node* _node;
		iterator(Node* node)
			:_node(node)
		{}
		T& operator*()//解引用记得引用
		{
			return _node->_data;
		}
		iterator& operator++()
		{
			_node->_next;
			return *this;
		}
		iterator& operator--()
		{
			_node->_prev;
			return *this;
		}

		bool operator!=(iterator& s)
		{
			return _node->_data != s._node->_data;
		}
		bool operator==(iterator& s)
		{
			return _node->_data == s._node->_data;
		}
	};
	template<class T>
	class list
	{
		typedef list_node<T> Node;
		typedef list_iterator<T> iterator;
	public:
		iterator begin()
		{
			return _head->_next;
		}
		iterator end()
		{
			return _head->_prev;
		}
		list()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			_size = 0;
		}
	private:
		Node* _head;
		size_t _size;
	};
}