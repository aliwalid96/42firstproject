/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 03:15:53 by amuhsen           #+#    #+#             */
/*   Updated: 2024/10/06 23:15:23 by amuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		*ptr = '\0';
		return (ptr);
	}
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	ptr = malloc(len + 1);
	if (ptr == NULL || s == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
