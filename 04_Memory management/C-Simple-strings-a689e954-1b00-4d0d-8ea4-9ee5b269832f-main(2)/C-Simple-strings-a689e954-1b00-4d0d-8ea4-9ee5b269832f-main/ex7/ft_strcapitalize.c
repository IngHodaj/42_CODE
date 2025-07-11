/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleant.hodaj <kleant.hodaj@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 09:08:36 by kleant.hoda       #+#    #+#             */
/*   Updated: 2025/07/04 09:23:22 by kleant.hoda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	space;

	i = 0;
	space = 1;
	while (str[i])
	{
		if (space && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (!space && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		space = !((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'));
		i++;
	}
	return (str);
}
