#include <stdio.h>
#include "test.h"

int main(void)
{
    int a = 2, b = 3;

    printf("%d + %d = %d", a, b, add(a, b));

    return 0;
}
