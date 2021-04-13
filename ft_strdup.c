/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(const char *s)
{
    char *new_s;
    char *bk;
    size_t  size;
    size_t  i;

    size = 0;
    bk = (char *)s;
    while (*bk++)
        ;
    size = bk - s; 
    if (!(new_s = malloc(sizeof(char) * size)))
        return (NULL);
    i = 0;
    while (s[i])
    {
        new_s[i] = s[i];
        i++; 
    }
    new_s[i] = 0;
    return(new_s);
}