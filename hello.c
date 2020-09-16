#include <stdio.h>
#include "pmath.h"

int main(int argc, char * argv[])
{
    int x = 2;
    int y = 1;

    printf("Hello from C\n");
    printf("%d + %d = %d\n", x, y, add(x, y));
    return 0;
}
