/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:29:10 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 17:33:23 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void): ASpell("Fwoosh", "fwooshed")
{
	return ;
}

Fwoosh::Fwoosh(const Fwoosh& copy): ASpell(copy)
{
	return ;
}

Fwoosh	&Fwoosh::operator = (const Fwoosh &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

Fwoosh::~Fwoosh(void)
{
	return ;
}

Fwoosh *Fwoosh::clone(void) const
{
	return (new Fwoosh(*this));
}
