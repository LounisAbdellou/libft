/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:11:35 by labdello          #+#    #+#             */
/*   Updated: 2024/04/07 15:14:03 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 1 && str[i] != c)
		i--;
	if (str[i] == c)
		return (str + i);
	return (NULL);
}
