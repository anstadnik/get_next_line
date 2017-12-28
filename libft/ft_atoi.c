/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 14:26:43 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/23 15:10:46 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The atoi() function converts the initial portion of the string pointed to by
** str to int representation.
*/

#include "libft.h"

int	ft_atoi(const char *s)
{
	char	neg;
	long	rez;

	rez = 0;
	neg = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			neg = 1;
	while (*s == '0')
		s++;
	while (ft_isdigit(*s))
	{
		rez = rez * 10 + (long)(*s++ - '0');
		if ((rez > INT_MAX && !neg) || (rez * -1 < INT_MIN && neg))
		{
			ft_putendl_fd("I am ft_atoi, sorry, there is too much", 2);
			return (neg ? INT_MIN : INT_MAX);
		}
	}
	return (neg ? -1 * (int)rez : (int)rez);
}
