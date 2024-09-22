/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:48:45 by amuhsen           #+#    #+#             */
/*   Updated: 2024/09/23 00:04:42 by amuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = ft_strlen(src);
	if(size==0)
		return(len);
	while(*src && (size -1))
	{
		*dst++ = *src++;
		size--;
	}
	*dst='\0';
	return(len);
}
