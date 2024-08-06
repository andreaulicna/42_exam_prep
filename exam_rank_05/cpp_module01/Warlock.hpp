/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:54:12 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 18:12:21 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock
{
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock(void);

		const std::string &getName(void) const;
		const std::string &getTitle(void) const;

		void	setTitle(const std::string &title);

		void	introduce(void) const;
		void	learnSpell(ASpell *spellToLearn);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName, const ATarget &target);

	private:
		Warlock(void);
		Warlock(const Warlock& copy);
		Warlock	&operator=(const Warlock &src);

		std::string					_name;
		std::string					_title;
		std::vector<ASpell *>	_spells;

};

#endif

