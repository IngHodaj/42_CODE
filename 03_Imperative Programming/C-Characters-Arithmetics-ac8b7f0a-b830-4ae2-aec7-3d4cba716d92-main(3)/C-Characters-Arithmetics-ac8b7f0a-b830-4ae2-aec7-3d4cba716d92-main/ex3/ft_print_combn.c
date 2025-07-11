/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleant.hodaj <kleant.hodaj@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 20:36:45 by kleant.hoda       #+#    #+#             */
/*   Updated: 2025/06/28 23:18:22 by kleant.hoda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <login> <email@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 18:00:00 by <login>           #+#    #+#             */
/*   Updated: 2025/06/28 18:00:00 by <login>          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	print_comb(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
	if (comb[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

static void	init_comb(int *comb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		comb[i] = i;
		i++;
	}
}

static void	next_comb(int *c, int n)
{
	int	pos;

	pos = n - 1;
	while (pos >= 0 && c[pos] == 9 - (n - 1 - pos))
		pos--;
	if (pos >= 0)
	{
		c[pos]++;
		pos++;
		while (pos < n)
		{
			c[pos] = c[pos - 1] + 1;
			pos++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	comb[10];

	if (n <= 0 || n >= 10)
		return ;
	init_comb(comb, n);
	while (1)
	{
		print_comb(comb, n);
		if (comb[0] == 10 - n)
			break ;
		next_comb(comb, n);
	}
	ft_putchar('\n');
}

/*int	main(void)
{
	ft_print_combn(2);
	return (0);
}*/
