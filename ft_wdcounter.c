/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdcounter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reginanureeva <reginanureeva@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 10:42:56 by rnureeva          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/11/06 14:41:41 by rnureeva         ###   ########.fr       */
=======
/*   Updated: 2019/11/06 10:56:35 by reginanuree      ###   ########.fr       */
>>>>>>> d11b16252016749ef48f36c9b050ca9c6aa7c78a
/*                                                                            */
/* ************************************************************************** */

int		ft_wdcounter(char const *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i])
			words++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (words);
}
