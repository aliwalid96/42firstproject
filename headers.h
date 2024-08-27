/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalmasou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:05:59 by oalmasou          #+#    #+#             */
/*   Updated: 2024/05/18 17:54:16 by oalmasou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int		ft_strlen(char *str);

char	*concat(char *str1, char *str2, char *str3);

char	*trim_trailing_characters(char *str);

char	*numbertotext(char *number);

char	*concattenate_with_scale(char *current_segment, char *rest_result,
			int scale_index);

char	*process_segment(char *segment, int length);

char	*process_segmants(char *number, int digits_in_group, int len);

char	*ft_strdup(char *src);

char	*handle_single_digit(char *number);

char	*handle_two_digits(char *number);

char	*handle_three_digits(char *number);

char	*append_scale_word(char *text, char *scale_word);

extern char	*g_low_numbers[];

extern char	*g_teen_numbers[];

extern char	*g_tens_numbers[];

extern char	*g_scale_numbers[];

#endif
