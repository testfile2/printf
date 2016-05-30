/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaunder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 08:29:51 by bsaunder          #+#    #+#             */
/*   Updated: 2016/05/20 09:13:34 by bsaunder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t		inner;

	if (s2[0] == '\0')
		return ((char*)s1);
	while (*s1)
	{
		inner = 0;
		while (s1[inner] == s2[inner])
		{
			if (s2[inner + 1] == '\0')
				return ((char*)s1);
			inner++;
		}
		s1++;
	}
	return (0);
}
