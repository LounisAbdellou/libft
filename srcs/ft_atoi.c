/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:35:44 by labdello          #+#    #+#             */
/*   Updated: 2024/04/20 23:29:51 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	mult;

	i = 0;
	res = 0;
	mult = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '+' && mult == 0)
			mult = 1;
		else if (str[i] == '-' && mult == 0)
			mult = -1;
		else if (str[i] < '0' || str[i] > '9')
			break ;
		else
			res = (res * 10) + (str[i] - 48);
		i++;
	}
	if (mult == 0)
		mult = 1;
	return (res * mult);
}
