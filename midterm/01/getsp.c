#include "getsp.h"

#define MAX_SIZE 100

void getsp(char* str)
{
    int i = 0;
    char ch = getc(stdin);

    while (ch != '\n' && i < MAX_SIZE - 1)
    {
        str[i++] = ch;
        ch = getc(stdin);
    }

    str[i] = '\0';
}
