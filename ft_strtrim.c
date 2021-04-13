/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c  	                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_verif_exist(char const s, char *set)
{
    while (*set)
       {
            if (*set++ == s)
                return (1);
        }
    return (0)    
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char const *bki;
    char const *bkf;
    char *char_return;
    size_t len;
    size_t bk_len;

    bki = s1;
    bkf = s1;
    len = 0;
    while (*bkf)
        bkf++;
    while (ft_verif_exist(*bki++, *set))
        ;
    while (ft_verif_exist(*--bkf, *set))
        ;
    len = bkf - bki + 1;
    if (!(char_return = malloc(sizeof(char) * len + 1)))
        return (NULL);
    bk_len = len;
    while (bk_len--)
        *char_return++ = *bki++;
    *char_return = 0;
    return (char_return - len);
}