//#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////typedef struct data
////{
////    int day;
////    int month;
////    int year;
////
////}data;
////void initdata(data* d)
////{
////    d->day = 1;
////    d->month = 1;
////    d->year = 2000;
////
////}
////void setnum(data* d, int num)
////{
////    d->year = num / 10000;
////    d->month = (num / 100) % 100;
////    d->day = num % 100;
////
////}
////int addday(data* d, int all)
////{
////    int t[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
////    if ((d->year % 4 == 0 && d->year % 100 != 0) || (d->year % 400 == 0))
////    {
////        t[2] = 29;
////    }
////    d->day += all;
////    while (d->day > t[d->month])
////    {
////        d->day -= t[d->month];
////        d->month++;
////        if (d->month == 13)
////        {
////            d->year++;
////            d->month = 1;
////        }
////    }
////    return (d->day + (d->month) * 100 + (d->year) * 10000);
////}
////int main()
////{
////    int a, b;
////    while (scanf("%d %d", &a, &b) != EOF)
////    { // 注意 while 处理多个 case
////        // 64 位输出请用 printf("%lld") to 
////        if (a == b)
////        {
////            printf("%d\n", 0);
////            return 0;
////        }
////
////        int max = a;
////        int min = b;
////        if (a < b)
////        {
////            max = b;
////            min = a;
////
////        }
////        data* d1;
////        data* d2;
////        initdata(&d1);
////        initdata(&d2);
////        setnum(&d1, max);//d1为大数
////        setnum(&d2, min);
////        int all = 0;
////        while (addday(&d2, 1) <= max)
////        {
////            all++;
////
////        }
////
////
////        printf("%d\n", all + 1);
////    }
////    return 0;
////}
//#include <stdio.h>
//typedef struct data
//{
//    int day;
//    int month;
//    int year;
//
//}data;
//void initdata(data* d)
//{
//    d->day = 1;
//    d->month = 1;
//    d->year = 2000;
//
//}
//void setnum(data* d, int num)
//{
//    d->year = num / 10000;
//    d->month = (num / 100) % 100;
//    d->day = num % 100;
//
//}
//int addday(data* d, int all, int* t)
//{
//
//    if ((d->year % 4 == 0 && d->year % 100 != 0) || (d->year % 400 == 0))
//    {
//        t[2] = 29;
//    }
//    d->day += all;
//    while (d->day > t[d->month])
//    {
//        d->day -= t[d->month];
//        d->month++;
//        if (d->month == 13)
//        {
//            d->year++;
//            d->month = 1;
//        }
//    }
//    t[2] = 28;
//    return (d->day + (d->month) * 100 + (d->year) * 10000);
//}
//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        int t[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        if (a == b)
//        {
//            printf("%d\n", 0);
//            return 0;
//        }
//
//        int max = a;
//        int min = b;
//        if (a < b)
//        {
//            max = b;
//            min = a;
//
//        }
//        data* d1;
//        data* d2;
//        initdata(&d1);
//        initdata(&d2);
//        setnum(&d1, max);//d1为大数
//        setnum(&d2, min);
//        int all = 0;
//        while (addday(&d2, 1, t) <= max)
//        {
//            all++;
//
//        }
//
//
//        printf("%d\n", all + 1);
//    }
//    return 0;
//}