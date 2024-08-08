/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:49:49 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 17:15:05 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(const std::string &type): _type(type)
{
	return ;
}

ATarget::ATarget(const ATarget& copy)
{
	this->_type = copy._type;
}

ATarget	&ATarget::operator = (const ATarget &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

ATarget::~ATarget(void)
{
	return ;
}

const std::string &ATarget::getType(void) const
{
	return (this->_type);
}

void	ATarget::getHitBySpell(const ASpell &instance) const
{
	std::cout << this->_type << " has been " << instance.getEffects() << "!" << std::endl;
}