//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class stack
//{
//private:
//	int* a;
//	int top;
//	int capacity;
//public:
//	stack(int size = 4)
//	{
//		capacity = size;
//		a = (int*)malloc(sizeof(int) * size);
//		top = 0;
//	}
//	~stack()
//	{
//		free(a);
//	}
//	bool isempty()
//	{
//		if (top == 0)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	bool isfull()
//	{
//		return top == capacity;
//	}
//	void pushstack(int val)
//	{
//		if (top == capacity)
//		{
//			int n = (capacity == 0 ? 4 : 2 * capacity);
//			int*tmp = (int*)realloc(a, sizeof(int) * n);
//			if (tmp == NULL)
//			{
//				return;
//			}
//			a = tmp;
//			capacity = n;
//		}
//		
//		a[top] = val;
//		top++;
//		
//
//	}
//	void popstack()
//	{
//		if (isempty())
//		{
//			printf("¿ÕµÄ");
//			return;
//		}
//		top--;
//	}
//	int topelement()
//	{
//		if (top == 0)
//		{
//			return -1;
//		}
//		return a[top];
//	}
//
//
//};
//int main()
//{
//	stack s;
//	s.pushstack(10);
//	s.pushstack(20);
//	s.pushstack(30);
//	s.pushstack(40);
//	s.pushstack(50);
//	return 0;
//}