/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:39:43 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 11:32:43 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string _type;
	public:
		ATarget(std::string);
		ATarget(ATarget const &);
		ATarget &operator=(ATarget const &);
		std::string const &getType(void) const;
		virtual ATarget *clone(void) const =0;
		void getHitBySpell(ASpell const &) const;
		virtual ~ATarget(void);
};

#endif

