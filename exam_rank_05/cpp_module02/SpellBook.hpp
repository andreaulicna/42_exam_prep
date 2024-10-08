/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:37:47 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/16 12:31:25 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <vector>
# include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell *spellToLearn);
		void	forgetSpell(std::string const &spellToForget);
		ASpell	*createSpell(std::string const &spellToCreate);

	private:
		SpellBook(const SpellBook& copy);
		SpellBook	&operator=(const SpellBook &src);

		std::vector<ASpell *>	_book;

};

#endif
