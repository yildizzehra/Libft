

#include "libft.h"

int	ft_count_words(char *s, char c)
{
	int	wordcount;

	wordcount = 0;
	while (*s)
	{
		if (*s != c)
		{
			wordcount++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (wordcount);
}

static int	ft_length_word(char *s, char c, int i)
{
	int	lengthofword;

	lengthofword = 0;
	while (s[i] != c && s[i++])
		lengthofword++;
	return (lengthofword);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		wordcount;
	char	**parsedwords;
	int		lengthofword;
	int		j;

	i = 0;
	j = -1;
	wordcount = ft_count_words(s, c);
	parsedwords = (char **)malloc((wordcount + 1) * sizeof(char *));
	if (!parsedwords)
		return (NULL);
	while (++j < wordcount)
	{
		while (s[i] == c)
			i++;
		lengthofword = ft_length_word(s, c, i);
		parsedwords[j] = ft_substr(s, i, lengthofword);
		i += lengthofword;
	}
	parsedwords[j] = 0;
	return (parsedwords);
}
