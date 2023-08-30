/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antferna <antferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:37:10 by antferna          #+#    #+#             */
/*   Updated: 2023/06/30 16:54:47 by antferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_nl(char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strchr_nl(char *s, int c)
{
	char	*str;
	int		i;
	char	aux;

	aux = c;
	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] == aux)
			return (str + i);
		i++;
	}
	if (aux == '\0')
		return (str + i);
	return (0);
}

char	*ft_strjoin_nl(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	str = (char *)malloc(ft_strlen_nl(s1) + ft_strlen_nl(s2) + 1);
	if (!str)
		return (ft_free_nl(&s1));
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	free(s1);
	return (str);
}

static char	*ft_strdup_nl(char *s1)
{
	int		i;
	char	*s2;

	s2 = (char *)malloc(ft_strlen_nl(s1) + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_substr_nl(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen_nl(s))
		str = ft_strdup_nl("");
	else
	{
		if (start + len > ft_strlen_nl(s))
			len = ft_strlen_nl(s) - start;
		str = (char *)malloc(len + 1);
		if (str == NULL)
			return (NULL);
		while (len > 0 && s[start])
		{
			str[i] = s[start];
			len--;
			i++;
			start++;
		}
		str[i] = '\0';
	}
	return (str);
}
