/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aulicna <aulicna@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:10:21 by aulicna           #+#    #+#             */
/*   Updated: 2024/08/16 12:31:13 by aulicna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <vector>
# include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void learnTargetType(ATarget* targetToLearn);
		void forgetTargetType(std::string const &targetToForget);
		ATarget* createTarget(std::string const &targetToCreate);

	private:
		TargetGenerator(const TargetGenerator& copy);
		TargetGenerator	&operator=(const TargetGenerator &src);

		std::vector<ATarget *>	_book;

};

#endif
