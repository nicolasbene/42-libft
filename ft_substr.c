/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibenoit <nibenoit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:22:56 by nibenoit          #+#    #+#             */
/*   Updated: 2022/11/10 11:58:37 by nibenoit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	str = malloc(sizeof(*str) * len + 1);
	if (str)
	{
		ft_strlcpy(str, s + start, len + 1);
		return (str);
	}
	else
		return (NULL);
}
