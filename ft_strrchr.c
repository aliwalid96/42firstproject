/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:51:43 by amuhsen           #+#    #+#             */
/*   Updated: 2024/10/06 23:10:01 by amuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*start;

	start = (char *)s;
	str = start + ft_strlen(s);
	while (str != (start - 1))
	{
		if (*str == (char)c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
