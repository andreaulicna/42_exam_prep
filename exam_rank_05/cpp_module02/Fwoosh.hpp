/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:25:16 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 17:31:39 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include "ASpell.hpp"

class Fwoosh: public ASpell
{
	public:
		Fwoosh(void);
		Fwoosh(const Fwoosh& copy);
		Fwoosh	&operator=(const Fwoosh &src);
		~Fwoosh(void);

		virtual Fwoosh *clone(void) const;

	private:

};

#endif
