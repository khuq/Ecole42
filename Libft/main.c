/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:04:31 by hugur             #+#    #+#             */
/*   Updated: 2022/11/08 17:50:02 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    printf("test: %s \n",ft_itoa(-2147483648));
    printf("test: %s \n",ft_itoa(2147483647));
    printf("test: %s \n",ft_itoa(7483648));
    printf("test: %s \n",ft_itoa(0));
    printf("test: %s \n",ft_itoa(-02));
    printf("test: %s \n",ft_itoa(3));
   
    return (0);
}