/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void			*ft_my_free(char **tab, size_t n)
{
    size_t			i;
    
    i = 0;
    while (i < n)
    {
        free(tab[i]);
        i++;
    }
    free(tab);
    return (NULL);
}

static size_t	ft_count(char const *s, char c)
{
	size_t	index;
	size_t	len;
	size_t	count;

	index = 0;
	len = 0;
	count = 0;
	while (s[index + len])
	{
		if (s[index + len] == c)
			if (len)
			{
				count++;
				index += len;
				len = 0;
			}
			else
				index++;
		else
			len++;
	}
	if (len)
		return (count + 1);
	return (count);
}

static char			*ft_my_strdup(char const *str, size_t len) 
{
    size_t			i;
    char			*char_ret;

    if (!(char_ret = malloc(sizeof(char) * (len + 1)))) 
 		return (NULL); 
 	i = 0; 
 	while (i < len) 
 	{ 
 		char_ret[i] = str[i]; 
 		i++; 
 	} 
 	char_ret[len] = '\0'; 
 	return (char_ret); 
 } 

char				**ft_split(char const *str, char c) 
{ 
    char			**tab; 
    size_t			size_tab; 
 	size_t			len; 
 	size_t			n;

 	size_tab = ft_count(str, c); 
 	if (!(tab = malloc(sizeof(char*) * (size_tab + 1)))) 
 		return (NULL); 
 	n = 0; 
 	while (n < size_tab) 
 	{ 
 		len = 0; 
 		while (*str && *str == c) 
 			str++; 
 		while (*str && *str != c) 
 		{ 
 			len++; 
 			str++; 
 		} 
 		if (!(tab[n] = ft_my_strdup((str - len), len))) 
 			return (ft_my_free(tab, n)); 
 		n++; 
 	} 
 	tab[size_tab] = NULL; 
 	return (tab); 
 }