/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalmasou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:39:35 by oalmasou          #+#    #+#             */
/*   Updated: 2024/05/18 11:43:08 by oalmasou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;
	int		length;

	i = 0;
	length = ft_strlen(src);
	ptr = (char *)malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i <= length)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
