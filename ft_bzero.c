/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 00:01:28 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/30 00:05:34 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_bzero(void   *s, size_t  n)
{
    char    *a = s;
    size_t  i;

    i = 0;
    while (i < n)
    {
        a[i] = '\0';
        i++;
    }
}