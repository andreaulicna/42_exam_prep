/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:35:22 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 17:39:14 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
		Dummy(void);
		Dummy(const Dummy& copy);
		Dummy	&operator=(const Dummy &src);
		~Dummy(void);

		virtual Dummy *clone(void) const;

	private:

};

#endif

