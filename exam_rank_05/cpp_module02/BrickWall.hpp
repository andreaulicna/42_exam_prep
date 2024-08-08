/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:35:11 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/08 17:36:09 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include <iostream>
# include "ATarget.hpp"

class BrickWall: public ATarget
{
	public:
		BrickWall(void);
		BrickWall(const BrickWall& copy);
		BrickWall	&operator=(const BrickWall &src);
		~BrickWall(void);

		virtual BrickWall *clone(void) const;

	private:

};

#endif
