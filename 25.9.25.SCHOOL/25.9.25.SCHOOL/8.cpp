#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    long long sum = 0;
    long long fact = 1;
    for (int i = 1; i <= 20; i++) 
    {
        fact *= i;  
        sum += fact; 
    }
    cout <<  sum << endl;
    return 0;
}