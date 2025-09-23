#define _CRT_SECURE_NO_WARNINGS
// #include<iostream>
// using namespace std;
// template<class T>
// T add(const T&left,constT&right)
// {
//     return left+right;
// }

// int main()
// {
//     double a=1.1;
//     double b=1.2;

//     double t=add(a,b);
//     cout<<t<<endl;
//     return 0;
// }



//#include<iostream>
//using namespace std;
//#include<cstring>
// template <class T>
// T add (const T&left,const T&right)
// {
//     return left+right;

// }
// int main()
// {
//     cout<<add<double>(1.1,3)<<endl;
//     return 0;
// }
//template<typename T>
//class stack
//{
//public:
//    stack(int capacity = 4)
//    {
//        _arr = new T[capacity];
//        _capacity = capacity;
//        _size = 0;
//    }
//    void push(const T& data);
//    ~stack()
//    {
//
//    }
//    
//private:
//    T* _arr;
//    int _capacity;
//    int _size;
//};
//template<class T>
//void stack<T>::push(const T& data)
//{
//    if (_capacity == _size)
//    {
//        T* d = new T[_capacity * 2];
//        memcpy(d, _arr, sizeof(T) * _size);
//        delete[] _arr;
//        _arr = d;
//    }
//    _arr[_size] = data;
//    _size++;
//}
//int main()
//{
//    stack<int> s1;
//    s1.push(1);
//    return 0;
//}
//template<class T1,class T2>
//T2 add(const T1&a, const T2&b)
//{
//	return a + b;
//}
//int main()
//{
//	cout << add(2, 4.4) << endl;
//	return 0;
//}