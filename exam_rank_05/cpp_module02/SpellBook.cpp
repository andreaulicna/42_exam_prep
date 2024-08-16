/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:49:18 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/16 12:32:58 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
	return ;
}

SpellBook::~SpellBook(void)
{
	for (std::vector<ASpell *>::iterator it = this->_book.begin(); it != this->_book.end(); )
	{
		delete *it;
		it = this->_book.erase(it);
	}
}

void	SpellBook::learnSpell(ASpell *spellToLearn)
{
	for (size_t i = 0; i < this->_book.size(); i++)
	{
		if (this->_book[i]->getName() == spellToLearn->getName())
			return ;
	}
	this->_book.push_back(spellToLearn->clone());
}

void	SpellBook::forgetSpell(std::string const &spellToForget)
{
	for (std::vector<ASpell *>::iterator it = this->_book.begin(); it != this->_book.end(); )
	{
		if ((*it)->getName() == spellToForget)
		{
			delete *it;
			it = this->_book.erase(it);
		}
		else
			it++;
	}
}

ASpell	*SpellBook::createSpell(std::string const &spellToCreate)
{
	for (size_t i = 0; i != this->_book.size(); i++)
	{
		if (this->_book[i]->getName() == spellToCreate)
			return (this->_book[i]->clone());
	}
	return (NULL);
}

