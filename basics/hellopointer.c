#include <stdio.h>

void fun(int *i)
{
    *i = *i + 1;
}

int main()
{
    int pskills[] = {10, 20, 30, 40, 50};
    int i, *ptr;
    ptr = pskills;
    for (i = 0; i < 4; i++)
    {
        fun(ptr++);
        printf("\n%d", *ptr);
    }
}
