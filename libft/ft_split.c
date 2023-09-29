/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dialarco <dialarco@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:16:18 by dialarco          #+#    #+#             */
/*   Updated: 2023/07/20 15:01:07 by dialarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strcont(char const *s, char c)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c && i != 0)
			n++;
		i++;
	}
	return (n);
}

void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		word_count;

	word_count = 0;
	result = (char **)malloc(sizeof(char *) * (ft_strcont(s, c) + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			continue ;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		result[word_count] = (char *)malloc(j - i + 1);
		if (!result[word_count])
			return (free_split(result), NULL);
		ft_strlcpy(result[word_count++], s + i, j - i + 1);
		i = j - 1;
	}
	result[word_count] = NULL;
	return (result);
}

/* int main()
{
	char *str = "Hola mundo!";
    char **result = ft_split(str, ' ');
	for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }

    free(result);
} */