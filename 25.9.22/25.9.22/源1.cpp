//#include <iostream>
//using namespace std;
//class date
//{
//public:
//    date(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    date operator+=(int day)
//    {
//        int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//        _day += day;
//        while (_day > a[_month])
//        {
//            if (_month == 2 && ((_year % 400 != 0 && _year % 4 == 0) || _year % 400 == 0))
//            {
//                a[2] = 29;
//            }
//            _day -= a[_month];
//            _month++;
//            if (_month == 13)
//            {
//                _month = 1;
//                _year++;
//            }
//            a[2] = 28;
//        }
//        return *this;
//        
//
//    }
//    void print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//
//
//};
//int main()
//{\
//    int a, b, c, d;
//    while (cin >> a >> b >> c >> d)
//    { // 注意 while 处理多个 case
//
//        date da(a, b, c);
//        da += d;
//        da.print();
//        //cout >> da._year >> "-" >> da._month >> "-" >> da._day >> endl;
//
//
//    }
//}
//// 64 位输出请用 printf("%lld")