#include <stdio.h>
#include "pmath.h"

int main(int argc, char * argv[])
{
    // Addition variable definition
    int x = 6;
    int y = 3;

    printf("Hello from C\n");

    // Perform math operations and print result
    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d - %d = %d\n", x, y, sub(x, y));    
    printf("%d x %d = %d\n", x, y, multi(x, y));   
    printf("%d / %d = %d\n", x, y, div(x, y));    
    return 0;
}
