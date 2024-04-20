/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:48:29 by labdello          #+#    #+#             */
/*   Updated: 2024/04/21 00:08:37 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	get_nbr_len(int nbr)
{
	unsigned int	nb;
	size_t			count;

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

void	fill_nbr(int nbr, char *str, size_t *i)
{
	unsigned int	nb;

	nb = nbr;
	if (nbr < 0)
	{
		nb = -nbr;
		str[(*i)++] = '-';
	}
	if (nb >= 10)
	{
		fill_nbr(nb / 10, str, i);
		fill_nbr(nb % 10, str, i);
	}
	else
		str[(*i)++] = nb + 48;
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	nbr_len;
	char	*str;

	i = 0;
	nbr_len = get_nbr_len(n);
	str = (char *) malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return (NULL);
	fill_nbr(n, str, &i);
	str[i] = '\0';
	return (str);
}
