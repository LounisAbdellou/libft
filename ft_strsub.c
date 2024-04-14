/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:53:13 by labdello          #+#    #+#             */
/*   Updated: 2024/04/14 15:03:34 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*str;

	i = 0;
	str_len = len - start;
	str = (char *) malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	str[str_len] = '\0';
	while (i < str_len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
