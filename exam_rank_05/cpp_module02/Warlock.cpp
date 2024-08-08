/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:01:03 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 18:13:18 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName(void) const
{
	return (this->_name);
}

const std::string &Warlock::getTitle(void) const
{
	return (this->_title);
}

void	Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}

void	Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spellToLearn)
{
	for (size_t i = 0; i < this->_spells.size(); i++)
	{
		if (this->_spells[i]->getName() == spellToLearn->getName())
			return ;
	}
	this->_spells.push_back(spellToLearn->clone());
	
}

void	Warlock::forgetSpell(std::string spellName)
{
	for (std::vector<ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); )
	{
		if ((*it)->getName() == spellName)
		{
			delete *it;
			it = this->_spells.erase(it);
		}
		else
			it++;
	}
}

void	Warlock::launchSpell(std::string spellName, const ATarget &target)
{
	for (size_t i = 0; i < this->_spells.size(); i++)
	{
		if (this->_spells[i]->getName() == spellName)
		{
			this->_spells[i]->launch(target);
			return ;
		}
	}
}
