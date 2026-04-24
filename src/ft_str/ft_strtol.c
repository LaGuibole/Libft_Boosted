#include "libft.h"

static int get_digit(char c)
{
	if (ft_isdigit(c))
		return(c - '0');
	if (ft_isalpha(c))
		return(ft_toupper(c) - 'A' + 10);
	return (-1);
}

long	ft_strtol(const char *nptr, char **endptr, int base)
{
	const char	*str = nptr;
	long 		result = 0;
	int			sign = 1;
	int			digit;

	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (base == 0)
	{
		if (*str == '0')
		{
			if (*(str + 1) == 'x' || *(str + 1) == 'X')
			{
				base = 16;
				str += 2;
			}
			else
				base = 8;
		}
		else
			base = 10;
	}
	else if (base == 16 && *str == '0' && (*(str + 1) == 'x' || *(str + 1) == 'X'))
		str += 2;
	
	while ((digit = get_digit(*str)) >= 0 && digit < base)
	{
		if (result > (LONG_MAX - digit) / base)
		{
			if (endptr)
				*endptr = (char *)str;
			return (sign == 1 ? LONG_MAX : LONG_MIN);
		}
		result = result * base + digit;
		str++;
	}
	if (endptr)
		*endptr = (char *)str;
	return (result * sign);	
}
