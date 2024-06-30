#include <stdio.h>

int main(void)
{
    char c = 'Q';
    void *p;
    p = &c;
    printf("Char: %c\n", c);
    printf("ponteiro: %c\n", *(char *)p);
    return 0;
}