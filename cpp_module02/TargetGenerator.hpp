/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:00:12 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 12:49:23 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const &);
		TargetGenerator &operator=(TargetGenerator const &);
		std::map<std::string, ATarget *> _arr;
	public:
		TargetGenerator(void);
		void learnTargetType(ATarget *);
		void forgetTargetType(std::string const &);
		ATarget *createTarget(std::string const &);
		~TargetGenerator(void);
};

#endif

