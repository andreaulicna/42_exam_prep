/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:19:33 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 16:59:25 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
	//	ASpell(void);
		ASpell(const std::string &name, const std::string &effects);
		ASpell(const ASpell& copy);
		ASpell	&operator=(const ASpell &src);
		virtual ~ASpell(void);

		const std::string &getName(void) const;
		const std::string &getEffects(void) const;

		virtual ASpell *clone(void) const = 0;
		void	launch(const ATarget &instance) const;

	protected:
		std::string	_name;
		std::string _effects;

};

#endif
