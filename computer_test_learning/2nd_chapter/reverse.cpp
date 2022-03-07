//根据数据量判断是否可以通过枚举解决

//输出所有9倍于自己的数字刚好是本身的反序数的四位数
#include <iostream>
using namespace std;

int reverse(int number)
{
    int result = 0;
    while (number)
    {
        result = result * 10 + number % 10;
        number /= 10;
    }
    return result;
}

int main()
{
    for (int i = 1000; i <= 9999; i++)
    {
        if (i == reverse(i * 9))
        {
            cout << i << endl;
        }
    }
}

//判断是否为回文数也可以通过比较反序数是否等于原数来判断
