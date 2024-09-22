/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:53:18 by amuhsen           #+#    #+#             */
/*   Updated: 2024/09/23 00:31:29 by amuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len=ft_strlen(src);
	if(dst_len >= size)
		return(size+src_len);
	i = dst_len;
	j = 0;
	while((size - dst_len - 1) > j && (src[j] !='\0'))
		dst[i++] = src[j++];
	dst[i]=0;
	return(dst_len+src_len);
