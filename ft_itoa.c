/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpaesch <tpaesch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:33:57 by tpaesch           #+#    #+#             */
/*   Updated: 2023/10/16 21:53:53 by tpaesch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*chr;
	int		i;
	int		j;
	int		sign;

	j = n;
	i = 0;
	sign = 1;
	if (n == 0 || n < 0)
		i++;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		sign = -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	chr = malloc((i + 2) * sizeof(char));
	if (chr == NULL)
		return (NULL);
	if (j < 0)
	{
		j *= -1;
		chr[0] = '-';
	}
	chr[i] = '\0';
	i--;
	while ((i >= 0 && sign == 1) || (i > 0 && sign == -1))
	{
		chr[i] = (j % 10) + '0';
		j /= 10;
		i--;
	}
	return (chr);
}
