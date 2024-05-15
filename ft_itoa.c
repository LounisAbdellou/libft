/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:48:29 by labdello          #+#    #+#             */
/*   Updated: 2024/05/15 14:21:26 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	fill_nbr(int nbr, char *str)
{
	int		r;
	size_t	i;
	size_t	nb;

	i = 0;
	nb = ft_abs(nbr);
	while (nb)
	{
		r = nb % 10;
		str[i++] = r + 48;
		nb = nb / 10;
	}
	if (nbr < 0)
		str[i++] = '-';
	str[i] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	nbr_len;
	char	*str;

	nbr_len = ft_nbrlen(n);
	str = (char *) malloc(sizeof(char) * (nbr_len + 1));
	if (!str)
		return (NULL);
	fill_nbr(n, str);
	return (str);
}

#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_itoa(ft_atoi(av[1])));
	return 0;
}
