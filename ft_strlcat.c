/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t      ft_strlen(char * str)
{
    char    *bk;

    bk = str;
    while (*bk++)
        ;
    return (bk - s - 1);
}
size_t      ft_strlcat ( char * dst , const char * src , size_t size)
{
    size_t  dstlen;
    size_t retour;
    size_t i;

    dstlen = 0;
    retour = 0;
    i = 0;
    dstlen = ft_strlen(dst);
    retour = ft_strlen(src);
    retour = ((size <= dstlen) ? (retour + size) : (retour + dstlen));  
    while (dstlen + 1 < size && src[i])
    {
        dest[dstlen] = src[i];
        i++;
        dstlen++;
    }
    return (retour);
}