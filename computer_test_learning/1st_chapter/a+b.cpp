#include <iostream>
#include <cstdio>
using namespace std;

// C 单组输入
void problem1_c()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
}
// C++ 单组输入
void problem1_cpp()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

// C 多组输入 未知组数
void problem2_c()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        printf("%d\n", a + b);
    }
}

// C++ 多组输入 未知组数
void problem2_cpp()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
}

// C 多组输入,指定组数
void problem3_c()
{
    int n;
    int a, b;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}

// C++ 多组输入,指定组数
void problem3_cpp()
{
    int n;
    int a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
}

// C 多组输入,指定跳出
void problem4_c()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF && a != 0 && b != 0)
    {
        printf("%d\n", a + b);
    }
}

// C++ 多组输入,指定跳出
void problem4_cpp()
{
    int a, b;
    while (cin >> a >> b && a != 0 && b != 0)
    {
        cout << a + b << endl;
    }
}

int main()
{
    // problem1_c();
    // problem1_cpp();
    // problem2_c();
    // problem2_cpp();
    // problem3_c();
    // problem3_cpp();
    // problem4_c();
    // problem4_cpp();
    return 0;
}