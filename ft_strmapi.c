/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnyamets <lnyamets@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/12 09:12:00 by lnyamets          #+#    #+#             */
/*   Updated: 2020/04/12 20:12:00 by lnyamets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	tail;

	tail = ft_strlen(s);
	if (!(str = malloc(sizeof(char) * (tail + 1))))
		return (NULL);
	str[tail] = 0;
	while (tail--)
		str[tail] = f(tail, s[tail]);
	return (str);
}