/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugur <hugur@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:04:31 by hugur             #+#    #+#             */
/*   Updated: 2022/11/08 12:25:28 by hugur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    int i;
    char **str;
      
    i=0;
      str = ft_split("Salut mon al gars ça vala bien" ,'l');
    //ft_split("! Salut \t mon gars ça va bien" ,' ');
    while (str[i])
        {
            printf("affichage mot %s \n", str[i]);
            i++;
        }
    //ft_split("Salut mon gars \t \n ça va bien" ,'\t');
    printf("\n");
    return (0);
}