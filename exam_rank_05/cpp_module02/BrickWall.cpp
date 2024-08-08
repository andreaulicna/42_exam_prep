/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:36:15 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/08 17:37:24 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(void): ATarget("Inconspicuous Red-brick Wall")
{
	return ;
}

BrickWall::BrickWall(const BrickWall& copy): ATarget(copy)
{
	return ;
}

BrickWall	&BrickWall::operator = (const BrickWall &src)
{
	if (this != &src)
		*this = src;
	return (*this);

}

BrickWall::~BrickWall(void)
{
	return ;
}

BrickWall *BrickWall::clone(void) const
{
	return (new BrickWall(*this));
}
