/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 08:56:39 by nguiard           #+#    #+#             */
/*   Updated: 2022/06/09 09:08:38 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	write(int fd, const char *buf, int size);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		i++;
	write(1, str, i);
}