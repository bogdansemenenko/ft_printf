/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:05:52 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/24 18:25:38 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int	handler_c(va_list args)
{
	char c;
	
	c = (char) va_arg(args, int);
	write(1, &c, 1);
	return (1);
}


int handler_s(va_list args)
{
	char *s;
	
	s = (char *) va_arg(args, char *);
	if(!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return(ft_strlen(s));
}


int handler_p(va_list args)
{
	void *p;
	
	p = (void *) va_arg(args, void *);
	if(!p)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	//hexadecimal
	//hexadecimal_l();
}

int handler_d(va_list args)
{
	int d;
	char *str;
	int str_len;

	d = (char *) va_arg(args, int);
	str = ft_itoa(s);
	if(!str)
		return (0);
	str_len = ft_strlen(str);
	free(str);
	return (str_len);
}

int hander_u(va_list args)
{
	unsigned int u;
	char *str;
	int str_len;

	u = (char *) va_arg(args, unsigned int);
	str = ft_utoa(u);
	if(!str)
		return (0);

	str_len = ft_strlen(str);
	free(str);
	return (str_len);
}
