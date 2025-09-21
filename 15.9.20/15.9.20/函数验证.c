//#include <stdio.h>
//
//// 原始add函数
//int add(int x, int y) {
//    return x + y;
//}
//
//int main() {
//    //// 声明函数指针
//    //int (*add_ptr)(int, int);
//
//    //// 将函数地址赋给指针
//    //add_ptr = &add;  // 或者直接使用 add_ptr = add;
//
//    //// 使用函数指针调用函数
//    //int result = add_ptr(5, 3);
//    //printf("5 + 3 = %d\n", result);
//    int (*pa)(int, int);
//    pa = add;
//    int x = pa(2, 5);
//    printf("%d", x);
//
//    return 0;
//}