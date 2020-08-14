/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trabut <trabut@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 17:04:28 by lewis             #+#    #+#             */
/*   Updated: 2020/07/09 14:28:33 by trabut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom_nukem.h"

double	norm2(double x, double y)
{
	return ((x * x) + (y * y));
}

double	scalar(double x1, double y1, double x2, double y2)
{
	return ((norm2(x1 + x2, y1 + y2) - norm2(x1, y1) - norm2(x2, y2)) / 2);
}
