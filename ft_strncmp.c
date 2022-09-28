int	ft_strncmp(const char *first, const char *second, size_t length)
{
	int	i;

	i = 0;
	while (i < length && (first[i] != '\0' || second[i] != '\0'))
	{
		if (first[i] != second[i])
			return (first[i] - second[i])
		i++;
	}
	return (0);
}
