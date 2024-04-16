/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:05:51 by labdello          #+#    #+#             */
/*   Updated: 2024/04/15 22:59:32 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start_i;
	size_t	str_size;

	i = 0;
	while (is_whitespace(s[i]))
		i++;
	start_i = i;
	i = ft_strlen((char *)s) - 1;
	while (is_whitespace(s[i]))
		i--;
	str_size = (i - start_i) + 1;
	return (ft_strndup(s + start_i, str_size));
}
