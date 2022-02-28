/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:37:41 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/19 18:41:47 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	i;
	int	a;

	n = 0;
	i = 0;
	a = 0;
	if (to_find[i] == '\0')
		return (str);
	while (to_find[i])
		i++;
	while (str[n])
	{
		a = 0;
		while (str[n] && str[n++] == to_find[a++])
		{
			if (to_find[a] == '\0')
				return (&str[n - a]);
		}
	}
	return (0);
}
