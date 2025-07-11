/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kleant.hodaj <kleant.hodaj@learner.42.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 10:50:37 by kleant.hoda       #+#    #+#             */
/*   Updated: 2025/07/01 13:08:40 by kleant.hoda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	pjestimi;
	int	modulari;

	if (b != 0)
	{
		pjestimi = *a / *b;
		modulari = *a % *b;
		*a = pjestimi;
		*b = modulari;
	}
}
