/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:25:51 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/08 17:26:40 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include "ASpell.hpp"

class Fireball: public ASpell
{
	public:
		Fireball(void);
		Fireball(const Fireball& copy);
		Fireball	&operator=(const Fireball &src);
		~Fireball(void);

		virtual Fireball *clone(void) const;

	private:

};

#endif
