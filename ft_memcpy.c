/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:45:32 by amuhsen           #+#    #+#             */
/*   Updated: 2024/09/22 21:46:48 by amuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dest, const void *src, size_t n)
	{
	char		*dest_1;
	const char	*src_1;
	size_t		i;

	i = 0;
	dest_1 = dest;
	src_1 = src;
	if (src == dest)
		return (dest);
	while (i < n)
	{
		dest_1[i] = src_1[i];
		i++;
	}
	return (dest);
}
