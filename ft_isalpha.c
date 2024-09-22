/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen <amuhsen@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:52:31 by amuhsen           #+#    #+#             */
/*   Updated: 2024/09/17 14:56:40 by amuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	/*
	 * This function checks if a character is an alphabetic character.
	 *
	 * If the character is between 65 and 90, it's an uppercase letter.
	 * If the character is between 97 and 122, it's a lowercase letter.
	 *
	 * If the character is an alphabetic character, return 1.
	 * Otherwise, return 0.
	 */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
