/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:34:04 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/19 18:35:30 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	n;
	int	a;

	n = 0;
	a = 0;
	while (dest[n])
		n++;
	while (src[a] && nb-- != 0)
		dest[n++] = src[a++];
	dest[n] = '\0';
	return (dest);
}
