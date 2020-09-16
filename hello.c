#include <stdio.h>
#include "pmath.h"

int main(int argc, char * argv[])
{
    // Addition variable definition
    int x = 2;
    int y = 1;

    printf("Hello from C\n");

    // Perform addition and print result
    printf("%d + %d = %d\n", x, y, add(x, y));
    return 0;
}
