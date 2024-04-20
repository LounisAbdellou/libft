/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:48:29 by labdello          #+#    #+#             */
/*   Updated: 2024/04/20 23:53:47 by labdello         ###   ########.fr       */
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
	size_t			len;
	unsigned int	nb;

	nb = nbr;
	len = ft_strlen(str);
	if (nbr < 0)
	{
		nb = -nbr;
		str[len] = '-';
	}
	if (nb >= 10)
	{
		fill_nbr(nb / 10, str);
		fill_nbr(nb % 10, str);
	}
	else
	{
		str[len] = nb + 48;
	}
}

char	*ft_itoa(int n)
{
	int		nbr_len;
	char	*str;

	nbr_len = get_nbr_len(n);
	str = (char *) malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	fill_nbr(n, str);
	str[ft_strlen(str)] = '\0';
	return (str);
}

#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	(void)av;
	printf("%s\n", ft_itoa(-32));
}
