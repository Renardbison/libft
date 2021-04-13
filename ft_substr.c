/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *char_retrn;
    size_t  i;

    if (!(char_retrn = malloc(sizeof(char) * len + 1)))
        return (NULL);
    i = 0;
    while (s[start + i] && len--)
    {
        char_retrn[i] = s[start + i];
        i++        
    }
    char_retrn[i] = 0;
    return (char_retrn);
}