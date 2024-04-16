/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdello <labdello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:26:03 by labdello          #+#    #+#             */
/*   Updated: 2024/04/15 20:28:05 by labdello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int a, int b)
{
	int	sub;

	sub = a - b;
	if (sub < 0)
		return (-sub);
	return (sub);
}