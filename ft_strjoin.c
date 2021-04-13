/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *char_return;
    size_t len_s1;
    size_t len_s2;

    len_s1 = 0;
    while (s1[len_s1])
        len_s1++;
    len_s2 = 0;
    while (s2[len_s2])
        len_s2++;
    if (!(char_return = malloc (sizeof(char) * (len_s1 + len_s2 + 1))))
        return (NULL);
    while (*s1)
		*char_return++ = *s1++;
	while (*s2)
		*char_return++ = *s2++;
    *char_return = 0;
    return (char_return - len_s1 - len_s2);    
}