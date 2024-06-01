#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *, ...)
{
    if (/*character actuel*/ == %)
        /*character actuel*/++;
            if (/*character actuel*/ == 'c')
            {
                ft_putchar(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == 's')
            {
                ft_putstr(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == 'p')
            {
                ft_putarghexa(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == 'd')
            {
                ft_putnbrdec(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == 'i')
            {
                ft_putintdec(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == 'u')
            {
                ft_putunsnbrdec(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == 'x')
            {
                ft_putnbrhexlower(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == 'X')
            {
                ft_putnbrhexupper(/*arg actuel*/);
                /*arg actuel*/++;
            }
            if (/*character actuel*/ == '%')
            {
                ft_putchar('%');
                /*arg actuel*/++;
            }
}