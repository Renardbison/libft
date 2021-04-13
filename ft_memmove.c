/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove( void* dst, const void* src, size_t length)
{
	char buff_src[length];
	char *dst_bkp;
	size_t n;

	n = length;
	dst_bkp = dst;
	if (dst == NULL || src == NULL)
		return (dst);
	while (length --)
	{
		buff_src[length] = ((char *)src)[length];
	}
	while (n--)
	{
		dst_bkp[n] = buff_src[n];
	}
	return (dst);
}