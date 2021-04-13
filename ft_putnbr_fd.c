/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char	c;
    size_t  l_n;

	if (n < 0)
	{
		write(fd, "-", 1);
		l_n = n * (-1);
	}
    l_n = n;
	if (l_n > 9)
		ft_putnbr_fd(l_n / 10, fd);
	c = l_n % 10 + '0';
	write(fd, &c, 1);
}