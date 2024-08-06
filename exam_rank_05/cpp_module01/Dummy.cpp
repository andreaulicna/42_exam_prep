/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:36:54 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/06 17:38:38 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void): ATarget("Target Practice Dummy")
{
	return ;
}

Dummy::Dummy(const Dummy& copy): ATarget(copy)
{
	return ;
}

Dummy	&Dummy::operator = (const Dummy &src)
{
	if (this != &src)
		*this = src;
	return (*this);

}

Dummy::~Dummy(void)
{
	return ;
}

Dummy *Dummy::clone(void) const
{
	return (new Dummy(*this));
}