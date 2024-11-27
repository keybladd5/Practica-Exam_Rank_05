/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:09:37 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/27 19:50:49 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "Warlock.hpp"

class ATarget
{
	protected:
		std::string _type;
	public:
		ATarget(std::string type);
		ATarget(ATarget const &);
		ATarget & operator=(ATarget const &src);
		virtual ATarget * clone(void) const = 0;
		std::string const &getType(void) const;
		void getHitBySpell(ASpell const &);
		virtual ~ATarget();
};

#endif

