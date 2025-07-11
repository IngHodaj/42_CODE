/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleant.hodaj <kleant.hodaj@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:23:38 by kleant.hoda       #+#    #+#             */
/*   Updated: 2025/07/01 12:28:15 by kleant.hoda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	tmp;
	int	ordered;

	ordered = 0;
	while (!ordered)
	{
		ordered = 1;
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				tmp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = tmp;
				ordered = 0;
			}
			a++;
		}
	}
}
