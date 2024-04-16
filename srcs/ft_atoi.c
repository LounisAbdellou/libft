/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:35:44 by labdello          #+#    #+#             */
/*   Updated: 2024/04/06 11:47:59 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	mult;

	i = 0;
	res = 0;
	mult = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-' && mult > 0)
			mult = -1;
		else if (str[i] < '0' || str[i] > '9')
			break ;
		else
			res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * mult);
}