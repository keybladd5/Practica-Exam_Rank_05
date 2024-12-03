/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:17:23 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/03 11:56:53 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP


#include "Warlock.hpp"

class ASpell;

class ATarget
{
	protected:
		ATarget(void);
		std::string _type;
	public:
		ATarget(std::string);
		ATarget(ATarget const &);
		ATarget & operator=(ATarget const &);
		std::string const &getType(void) const;
		virtual ~ATarget(void);
		virtual ATarget * clone(void) const = 0;
		void getHitBySpell(ASpell const &) const;

};

#endif

