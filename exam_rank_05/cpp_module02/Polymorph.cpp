/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:33:59 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/08 17:34:52 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(void): ASpell("Polymorph", "turned into a critter")
{
	return ;
}

Polymorph::Polymorph(const Polymorph& copy): ASpell(copy)
{
	return ;
}

Polymorph	&Polymorph::operator = (const Polymorph &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

Polymorph::~Polymorph(void)
{
	return ;
}

Polymorph *Polymorph::clone(void) const
{
	return (new Polymorph(*this));
}
