/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:48:29 by labdello          #+#    #+#             */
/*   Updated: 2024/04/06 14:58:25 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	get_nbr_len(int nbr)
{
	unsigned int	nb;
	unsigned int	count;

	nb = nbr;
	count = 1;
	if (nbr < 0)
	{
		nb = -nbr;
		count++;
	}
	while (nb / 10 >= 1)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	fill_nbr(int nbr, char *str)
{
	unsigned int	nb;

	nb = nbr;
	if (nbr < 0)
	{
		nb = -nbr;
		str[ft_strlen(str)] = '-';
	}
	if (nb >= 10)
	{
		fill_nbr(nb / 10, str);
		fill_nbr(nb % 10, str);
	}
	else
	{
		str[ft_strlen(str)] = nb + 48;
	}
}

char	*ft_itoa(int nbr)
{
	int		nbr_len;
	char	*str;

	nbr_len = get_nbr_len(nbr);
	str = (char *) malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return (NULL);
	str[nbr_len] = '\0';
	fill_nbr(nbr, str);
	return (str);
}
