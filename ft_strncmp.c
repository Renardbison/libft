/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*bk_s1;
	unsigned char	*bk_s2;

	bk_s1 = (unsigned char*)s1;
	bk_s2 = (unsigned char*)s2;
	while ((*bk_s1 || *bk_s2) && n--)
		if (*bk_s1++ != *bk_s2++)
			return (*--bk_s1 - *--bk_s2);
	return (0);
}