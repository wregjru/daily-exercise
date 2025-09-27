#define _CRT_SECURE_NO_WARNINGS
#include"vector.h"
using namespace std;
int main() 
{
    bit::vector<int> a(3);
    for (int i = 1; i <= 5; i++) 
    {
        a.push_back(i * 10);
    }
    bit::vector<int> b(a);
    return 0;
}