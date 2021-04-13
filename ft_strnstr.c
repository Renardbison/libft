/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char    *ft_strnstr (const char * big , const char *little, size_t len )
{
    unsigned int i;
    unsigned int j;
 
    if (!*little)
        return ((char *) big);
    i = 0;
    while (big[i] && i < len)
    {
        if (big[i] == little[0])
        {
            j = 1;
        while (i + j < len && little[i] && big[i + j] == little[i])
            j++;
        if (little[j] == '\0')
            return ((char *) &big[i]);
        }
        i++;
    }
    return (NULL);
}