/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:37:47 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/08 17:40:57 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);

		void	learnSpell(ASpell *);
		void	forgetSpell(std::string const &spellToForget);
		ASpell	*createSpell(std::string const &spellToCreate);

	private:
		SpellBook(const SpellBook& copy);
		SpellBook	&operator=(const SpellBook &src);

};

#endif
