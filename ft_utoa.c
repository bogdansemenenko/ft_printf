/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:49:08 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/24 18:49:18 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"
static int	count_digits(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*fill_str(char *str_utoa, long long_n)
{
	int		len_utoa;
	int		i;

	i = 0;
	if (!long_n)
		return (ft_strdup("0"));
	len_utoa = count_digits(long_n);
	str_utoa[len_utoa] = '\0';
	while (long_n > 0)
	{
		str_utoa[len_utoa - i - 1] = (long_n % 10) + 48;
		long_n /= 10;
		i++;
	}
	return (str_utoa);
}

char	*ft_utoa(unsigned int n)
{
	char	*str_utoa;

	if (n == 0)
	{
		str_utoa = (char *)malloc(sizeof(char) * 2);
		if (!str_utoa)
			return (NULL);
		return (str_utoa[0] = '0', str_utoa[1] = '\0', str_utoa);
	}
	str_utoa = (char *)malloc(sizeof(char) * (count_digits(n) + 1));
	if (!str_utoa)
		return (NULL);
	return (fill_str(str_utoa, n));
}
