/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:46:24 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/24 18:47:10 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "printf.h"
int main(void)
{
	//unsigned int n = -2;
	printf("len: %d\n", ft_printf("Hello this is d: %d\n", 123));
	printf("len: %d\n", ft_printf("this is hex: %x\n", 123));
	return 0;
}
