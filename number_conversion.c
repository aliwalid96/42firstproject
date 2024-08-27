/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalmasou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:44:58 by oalmasou          #+#    #+#             */
/*   Updated: 2024/05/18 17:29:16 by oalmasou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

char	*concatenate_with_scale(char *current_segment,
	char *rest_result, int scale_index)
{
	char	*scale_word;
	char	*segment_with_scale;
	char	*result;

	scale_word = g_scale_numbers[scale_index];
	if (ft_strlen(scale_word) > 0 && ft_strlen(current_segment) > 0)
	{
		segment_with_scale = concat(current_segment, " ", scale_word);
		result = concat(segment_with_scale, " ", rest_result);
		result = trim_trailing_characters(result);
		free(segment_with_scale);
		return (result);
	}
	return (concat(current_segment, " ", rest_result));
}

char	*process_segments(char *number, int digits_in_group, int len)
{
	char	*current_segment;
	char	*rest_result;
	char	*final_result;
	int		scale_index;

	current_segment = process_segment(number, digits_in_group);
	if (len > 3)
	{
		rest_result = numbertotext(number + digits_in_group);
		scale_index = (len - 1) / 3;
		final_result = concatenate_with_scale(current_segment,
				rest_result, scale_index);
		final_result = trim_trailing_characters(final_result);
		free(current_segment);
		free(rest_result);
		return (final_result);
	}
	return (current_segment);
}

char	*numbertotext(char *number)
{
	int	len;
	int	digits_in_group;

	len = ft_strlen(number);
	if (len == 0)
		return (ft_strdup("Zero"));
	if (len > 37)
		return (ft_strdup("Error: Number too large"));
	if (len % 3 == 0)
	{
		digits_in_group = 3;
	}
	else
	{
		digits_in_group = len % 3;
	}
	return (process_segments(number, digits_in_group, len));
}
