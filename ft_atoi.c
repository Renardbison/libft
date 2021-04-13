/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(const char *nptr)
{
    int signe;
    int result;

    signe = 1;
    while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
    if (*nptr == '-' || *nptr == '+')
	{
		signe = ((*nptr == '-') ? (-1 * signe) : (1 * signe));
		nptr++;
	}
    result = 0;
    while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (result * signe);
}