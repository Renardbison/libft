/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *tab;

    if (!(tab = malloc(nmemb * size)))
        return (NULL);
    nmemb *= size;
    while (nmemb--)
        tab[nmemb] = 0;
    return(tab);
}