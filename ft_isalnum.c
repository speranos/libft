/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoueldma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:39:40 by aoueldma          #+#    #+#             */
/*   Updated: 2021/11/10 20:01:29 by aoueldma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	isalnum(int	c)
{
	if (c >= 97 && c<= 122)
		return (1);
	if	(c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int main()
{
	char fr = ' ';
	printf("%d",isalnum(fr));
}	
