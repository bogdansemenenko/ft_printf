/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#u#+   +#+           */
/*   Created: 2025/10/16 20:38:27 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/16 20:44:11 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

//static int parse(const char *format, va_list args);
int ft_printf(const char *format, ...);

int	handler_c(va_list args);
int handler_s(va_list args);
int handler_p(va_list args);
int handler_d(va_list args);
int handler_u(va_list args);
int handler_x(va_list args);
int handler_xx(va_list args);
char	*ft_utoa(unsigned int n);

#endif
