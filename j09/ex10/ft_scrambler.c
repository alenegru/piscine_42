/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/23 04:07:46 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/23 04:17:41 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	temp_a;
	int	temp_b;
	int	temp_c;
	int	temp_d;

	temp_a = ***a;
	temp_b = *b;
	temp_c = *******c;
	temp_d = ****d;
	***a = temp_b;
	*b = temp_d;
	*******c = ***a;
	****d = *******c;
}
