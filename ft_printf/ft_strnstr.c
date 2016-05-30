/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_v2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaunder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:47:24 by bsaunder          #+#    #+#             */
/*   Updated: 2016/05/20 08:26:19 by bsaunder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	outer;
	size_t	inner;

	if (s2[0] == '\0')
		return ((char*)s1);
	n -= ft_strlen(s2) - 1;
	outer = 0;
	while (outer < n && s1[outer])
	{
		inner = 0;
		while ((s1 + outer)[inner] == s2[inner])
		{
			if (s2[inner + 1] == '\0')
				return ((char*)s1 + outer);
			inner++;
		}
		outer++;
	}
	return (0);
}
