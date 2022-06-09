/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 08:48:13 by nguiard           #+#    #+#             */
/*   Updated: 2022/06/09 09:09:07 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prog.h"

int	main(void)
{
	ft_putstr("Nombre de base: ");
	ft_putnbr(NBR);
	ft_putstr("\tNombre multiplie par 5: ");
	ft_putnbr(multiply(NBR));
	ft_putstr("\n");
	return (0);
}