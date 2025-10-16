/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:52:16 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/16 22:48:41 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

static int parse(const char format, va_list args)
{
	if(*format == 'c')
		return handler_c(args);
	if(*format == 's')
		return handler_s(args);
	if(*format == 'p')
		return handler_p(args);
	if(*format == 'd' || *format == 'i')
		return handler_d(args);
	if(*format == 'u')
		return handler_u(args);
	if(*format == 'x')
		return handler_x(args);
	if(*format == 'X')
		return handler_xx(args);
	if(*format == '%')
		return write(1, "%", 1);

	return 0;
}



int ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int count;

	count = 0;
	while(*format)
	{
		if(*format == '%' && *format++)
		{
			if(parse(*format, args) != 0)
				count += parse(*format, args);
		}	
	
	}


	va_end(args);
}
