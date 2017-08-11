/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:55:19 by jbrown            #+#    #+#             */
/*   Updated: 2017/08/11 15:23:52 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb);

int		ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 13)
	{
		if (nb == 1)
		{
			return nb;
		}
		return nb * ft_recursive_factorial(nb);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
