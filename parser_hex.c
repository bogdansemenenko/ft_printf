/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsemenen <bsemenen@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:49:37 by bsemenen          #+#    #+#             */
/*   Updated: 2025/10/24 19:24:52 by bsemenen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

int handler_x(va_list args){

    char *list; 
    char hex[17];
    int i;
    unsigned long long int num;
    int len;

    i = 16;
    list = ("0123456789abcdef");
    hex[16] = '\0';
    num = (unsigned long long int)args;
    len = 0;
    if(!num)
        return(write(2, "0", 1));
    while(num > 0)
    {
        hex[i] = list[num % 16];
        num /= 16;
        len++;
        i--;
    }
    printf("hex: %s\n", hex);
    ft_putstr_fd(hex, 1);
    return(len);
}
int handler_xx(va_list args){

    char *list; 
    char hex[17];
    int i;
    unsigned long long int num;
    int len;

    i = 16;
    list = ("0123456789ABCDEF");
    hex[16] = '\0';
    num = (unsigned long long int)args;
    len = 0;
    if(!num)
        return(write(2, "0", 1));
    while(num > 0)
    {
        hex[i] = list[num % 16];
        num /= 16;
        len++;
        i--;
    }
    ft_putstr_fd(hex, 1);
    return(len);
}