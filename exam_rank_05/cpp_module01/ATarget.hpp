/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:27:18 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 17:01:58 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
	//	ATarget(void);
		ATarget(const std::string &type);
		ATarget(const ATarget& copy);
		ATarget	&operator=(const ATarget &src);
		~ATarget(void);

		const std::string &getType(void) const;

		virtual ATarget *clone() const = 0;
		void	getHitBySpell(const ASpell &instance) const;

	protected:
		std::string _type;

};

#endif
