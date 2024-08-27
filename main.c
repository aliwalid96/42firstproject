/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalmasou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:08:43 by oalmasou          #+#    #+#             */
/*   Updated: 2024/05/18 18:16:31 by oalmasou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "headers.h"

int	validate_input(char *inputnumber)
{
	int	i;

	i = 0;
	while (inputnumber[i])
	{
		if (inputnumber[i] < '0' || inputnumber[i] > '9')
		{
			write(1, "Error\n", 6);
			return (2);
		}
		i++;
	}
	if (ft_strlen(inputnumber) > 37)
	{
		write(1, "Dict Error\n", 11);
		return (3);
	}
	return (0);
}

void	process_and_display_number(char *inputnumber)
{
	char	*textrepresentation;
	int		j;

	j = 0;
	textrepresentation = numbertotext(inputnumber);
	if (textrepresentation == NULL)
	{
		write(1, "Dict Error\n", 11);
		return ;
	}
	while (textrepresentation[j])
	{
		write(1, &textrepresentation[j], 1);
		j++;
	}
	free(textrepresentation);
}

int	main(int argc, char *argv[])
{
	int		validation_status;

	if (argc != 2)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	validation_status = validate_input(argv[1]);
	if (validation_status != 0)
	{
		return (validation_status);
	}
	process_and_display_number(argv[1]);
	write(1, "\n", 1);
	return (0);
}
