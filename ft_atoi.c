#include "Libft.h"

int	ft_atoi(const char *s)
{
	int	result;
	int	neg;
	int	i;

	result = 0;
	neg = 1;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
			s[i] == '\v' || s[i] == '\f' || s[i]== '\r')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		result *= 10;
		result += s[i] - '0';
		i++;
	}
	return (result * neg);
}
