/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_Calcul_size(int n)
{
	size_t count;
    size_t long_n;

	count = 0;
	if (n < 0)
	{
		count++;
        long_n = n * (-1);
	}
    long_n = n;
	while (long_n > 9)
	{
		count++;
		long_n /= 10;
	}
	return (count + 1);
}

static char		*ft_set_n_to_nbr(int n, char *nbr)
{
	size_t	index;
    size_t l_n;

	index = 0;
	if (n < 0)
	{
		nbr[index++] = '-';
		l_n = n * (-1);
	}
    l_n = n;
    nbr[ft_Calcul_size(l_n) + index] = 0;
	while (n > 9)
	{
		nbr[ft_Calcul_size(l_n) - 1 + index] = n % 10 + '0';
		n /= 10;
	}
	nbr[index] = n % 10 + '0';
	return (nbr);
}

char    *ft_itoa(int n)
{
	char *nbr;
    size_t size_n;

	size_n = ft_Calcul_size(n);
    if (!(nbr = malloc(size_n + 1)))
		return (NULL);
	return (ft_set_n_to_nbr(n, nbr));
}