/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_to_text.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalmasou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:33:29 by oalmasou          #+#    #+#             */
/*   Updated: 2024/05/18 16:42:10 by oalmasou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include <stdlib.h>

char	*g_low_numbers[] = {"Zero", "One", "Two", "Three", "Four", "Five",
	"Six", "Seven", "Eight", "Nine"};

char	*g_teen_numbers[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
	"Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

char	*g_tens_numbers[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
	"Sixty", "Seventy", "Eighty", "Ninety"};

char	*g_scale_numbers[] = {"", "Thousand", "Million", "Billion", "Trillion",
	"Quadrillion", "Quintillion", "Sextillion", "Septillion",
	"Octillion", "Nonillion", "Decillion", "Undecillion"};

char	*handle_single_digit(char *number)
{
	return (ft_strdup(g_low_numbers[*number - '0']));
}

char	*handle_two_digits(char *number)
{
	char	*tens_part;
	char	*ones_part;
	char	*result;

	if (number[0] == '1')
		return (ft_strdup(g_teen_numbers[number[1] - '0']));
	else if (number[1] == '0')
		return (ft_strdup(g_tens_numbers[number[0] - '0']));
	else
	{
		tens_part = ft_strdup(g_tens_numbers[number[0] - '0']);
		ones_part = handle_single_digit(number + 1);
		result = concat(tens_part, "-", ones_part);
		result = trim_trailing_characters(result);
		free(tens_part);
		free(ones_part);
		return (result);
	}
}

char	*handle_three_digits(char *number)
{
	char	*hundreds_part;
	char	*rest_part;
	char	*result;

	if (number[0] == '0')
		return (handle_two_digits(number + 1));
	hundreds_part = concat(g_low_numbers[number[0] - '0'], " Hundred", "");
	hundreds_part = trim_trailing_characters(hundreds_part);
	rest_part = handle_two_digits(number + 1);
	if (number[1] == '0' && number[2] == '0')
	{
		free(rest_part);
		return (hundreds_part);
	}
	if (number[1] == '0')
		rest_part = handle_single_digit(number + 2);
	result = concat(hundreds_part, " and ", rest_part);
	result = trim_trailing_characters(result);
	free(hundreds_part);
	free(rest_part);
	return (result);
}

char	*process_segment(char *segment, int length)
{
	if (length == 1)
		return (handle_single_digit(segment));
	else if (length == 2)
		return (handle_two_digits(segment));
	else
		return (handle_three_digits(segment));
}
