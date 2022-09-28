#include "Libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = (size_t)ft_strlen(dest);
	while (i + j < n - 1 && src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(src) + j);
}
