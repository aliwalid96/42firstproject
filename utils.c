/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalmasou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:51:11 by oalmasou          #+#    #+#             */
/*   Updated: 2024/05/18 16:15:51 by oalmasou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

#include <stdlib.h>

char	*concat(char *str1, char *str2, char *str3)
{
	char	*result;
	int		len1;
	int		len2;
	int		len3;
	int		total_length;

	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	len3 = ft_strlen(str3);
	total_length = len1 + len2 + len3 + 1;
	result = malloc(total_length);
	if (!result)
		return (NULL);
	ft_strcpy(result, str1);
	ft_strcpy(result + len1, str2);
	ft_strcpy(result + len1 + len2, str3);
	result[total_length - 1] = '\0';
	return (result);
}

char	*trim_trailing_characters(char *str)
{
	int	i;

	if (!str || ft_strlen(str) == 0)
		return (str);
	i = ft_strlen(str) - 1;
	while (i >= 0 && (str[i] == '-' || str[i] == ' '))
	{
		str[i] = '\0';
		i--;
	}
	return (str);
}
