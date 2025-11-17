#include <iostream>
#include <stdarg.h>
using namespace std;

int sum(const int count, ...);

int main(void)
{
    int result = 0;
    for (int i = 0; i < 20; i++)
    {
        result += sum(4, i, 2, 7, 14);
        cout
            << "(Somando de 1 até 20) + 2 + 7 + 14 = "
            << result
            << endl;
    }

    return 0;
}

int sum(const int count, ...)
{
    va_list list;
    int sum = 0;

    va_start(list, count);
    for (int i = 0; i < count; i++)
    {
        sum += va_arg(list, int);
    }
    va_end(list);
    return sum;
}