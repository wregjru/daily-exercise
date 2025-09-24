#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Solution {
public:
    int shuwei(int shu)
    {
        int u = 1;
        for (int d = 0; d < shu-1; d++)
        {
            u = u * 10;
        }
        return u;
    }
    bool yes(char ch)
    {
        if (ch >= '0' && ch <= '9')
            return true;
        return false;
    }
    int myAtoi(string str)
    {
        int i;
        int shu = 0;//数位
        int flag = 1;//判断正负号
        int all = 0;//返回值
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == '+')
                break;
            if (str[j] == '-')
            {
                flag = -1;
                break;
            }
        }
        for (i = str.size() - 1; i >= 0; i--)
        {
            if (yes(str[i]) && shu <= 9)
            {
                shu++;
                int num = str[i] - '0';
                all = all + num * shuwei(shu);

            }
        }
        for (int s = i; s >= 0; s--)
        {
            if (yes(str[i]))
            {
                int num = str[i] - '0';
                if (num > 2)
                    break;
                else if (num < 2)
                {
                    shu++;
                    all = all + num * shu;
                    break;

                }
                else
                {
                    if (all > 147183647)
                    {
                        break;

                    }
                    else
                    {
                        shu++;
                        all = all + num * shu;
                        break;

                    }

                }
            }

        }
        return all * flag;

    }
};
int main()
{
    string ch("4193 with words");
    Solution s1;
    int c=s1.myAtoi(ch);
    cout << c << endl;
    return 0;
}