/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:26:44 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/08 17:30:13 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(void): ASpell("Fireball", "burnt to a crisp")
{
	return ;
}

Fireball::Fireball(const Fireball& copy): ASpell(copy)
{
	return ;
}

Fireball	&Fireball::operator = (const Fireball &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

Fireball::~Fireball(void)
{
	return ;
}

Fireball *Fireball::clone(void) const
{
	return (new Fireball(*this));
}
