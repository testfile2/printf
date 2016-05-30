#include "libft.h"

int		ft_printoct(va_list ap)
{
	char			*p;
	unsigned int	c;

	c = va_arg(ap, unsigned int);
	p = ft_otoa(c);
	ft_putstr(p);
	return (ft_strlen(p));
}
