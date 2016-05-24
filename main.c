#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void    ft_printf(const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    while (*format != 0)
    {
        if (*format == '\0')
            break;
        if (*format == )
        format++;
    }
}

int main()
{
    char *str = "lololol";
 
    ft_printf("sting : %s", str);
    return 0;
}
