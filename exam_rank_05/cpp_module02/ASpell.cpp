/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:54 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 16:58:52 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects): _name(name), _effects(effects)
{
	return ;
}

ASpell::ASpell(const ASpell& copy)
{
	this->_name = copy._name;
	this->_effects = copy._effects;
}

ASpell	&ASpell::operator = (const ASpell &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_effects = src._effects;
	}
	return (*this);
}

ASpell::~ASpell(void)
{
	return ;
}

const std::string &ASpell::getName(void) const
{
	return (this->_name);
}

const std::string &ASpell::getEffects(void) const
{
	return (this->_effects);
}

void	ASpell::launch(const ATarget &instance) const
{
	instance.getHitBySpell(*this);
}