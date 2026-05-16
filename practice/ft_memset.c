#include <stddef.h>

void    *ft_memset(void *b, int c, size_t len);

int main(void)
{
    char    str[] = "hello";
    int     c;
    size_t  len;

    c = 'a';
    len = 3;
    ft_memset(str, c, len);
    return (0);
}

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char    *q;
    unsigned char    d;
    size_t           i;

    q = (unsigned char *)b;
    d = (unsigned char)c;
    i = 0;
    while (i < len)
    {
        q[i] = c;
        i++;
    }
}