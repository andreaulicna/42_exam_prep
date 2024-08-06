/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:54:12 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 17:44:33 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock(void);

		const std::string &getName(void) const;
		const std::string &getTitle(void) const;

		void	setTitle(const std::string &title);

		void	introduce(void) const;

	private:
		Warlock(void);
		Warlock(const Warlock& copy);
		Warlock	&operator=(const Warlock &src);

		std::string	_name;
		std::string	_title;

};

#endif

