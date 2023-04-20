#include "putsp.h"

void putsp(char* str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putc(str[i++], stdout);
    }
}
