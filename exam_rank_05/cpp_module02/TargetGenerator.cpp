/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:12:47 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/16 12:37:10 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
	return ;
}

TargetGenerator::~TargetGenerator(void)
{
	return ;
}

void TargetGenerator::learnTargetType(ATarget* targetToLearn)
{
	for (size_t i = 0; i != this->_book.size(); i++)
	{
		if (this->_book[i]->getType() == targetToLearn->getType())
			return ;
	}
	this->_book.push_back(targetToLearn->clone());
}

void TargetGenerator::forgetTargetType(std::string const &targetToForget)
{
	for (std::vector<ATarget *>::iterator it = this->_book.begin(); it != this->_book.end(); )
	{
		if ((*it)->getType() == targetToForget)
		{
			delete *it;
			it = this->_book.erase(it);
		}
		else
			it++;
	}

}

ATarget* TargetGenerator::createTarget(std::string const &targetToCreate)
{
	for (size_t i = 0; i != this->_book.size(); i++)
	{
		if (this->_book[i]->getType() == targetToCreate)
			return (this->_book[i]->clone());
	}
	return (NULL);
}
