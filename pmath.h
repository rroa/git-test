#include <math.h>

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int multi(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    if(y == 0) return -1;
    return x / y;
}
