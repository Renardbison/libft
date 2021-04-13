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

void    *ft_memchr(const void *buf, int ch, size_t length )
{
	if (buf == NULL)
		return NULL;
	while (length--)
	{
		if ((*(unsigned char *) buf) == ch)
			return ((void *)buf);
		buf++;
	}
	return (NULL);
}