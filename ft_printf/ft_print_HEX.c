#include "libft.h"

static int		hexvalue(int h)
{
    if (0 <= h && h <= 9)
        return (48 + h);
    else if (10 <= h && h <= 15)
    {
        h = h - 10;
        return (65 + h);
    }
    return (0);
}

char				*ft_htoa_cap(unsigned long n)
{
    char			*p;
    int				size;
    unsigned long	x;
    
    x = n;
    size = 0;
    while (x > 16)
    {
        x = x / 16;
        size++;
    }
    p = (char *)malloc(sizeof(p) * (size + 1));
    if (p)
    {
        p[size + 1] = '\0';
        while (size >= 0)
        {
            x = n % 16;
            p[size] = hexvalue(x);
            n = n / 16;
            size--;
        }
    }
    return (p);
}

int		ft_print_HEX(va_list ap)
{
    char			*p;
    unsigned int	c;
    
    c = va_arg(ap, unsigned int);
    p = ft_htoa_cap(c);
    ft_putstr(p);
    return (ft_strlen(p));
}