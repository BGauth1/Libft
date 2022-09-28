char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*buff;
	int	i;
	
	buff = (char *)s1;
	while (buff != '\0')
	{
		i = 0;
		while (buff[i] == s2[i])
			i++;
		if (s2[i] == '\0')
			return (buff);
		buff++;
	}
	return (NULL);
}
