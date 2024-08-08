/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:32:39 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/08 17:33:41 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include "ASpell.hpp"

class Polymorph: public ASpell
{
	public:
		Polymorph(void);
		Polymorph(const Polymorph& copy);
		Polymorph	&operator=(const Polymorph &src);
		~Polymorph(void);

		virtual Polymorph *clone(void) const;

	private:

};

#endif
