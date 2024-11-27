/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:40:23 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/27 19:56:06 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include "Warlock.hpp"

class ASpell
{
	protected:
		std::string _name;
		std::string _effects;
	public:
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const &);
		ASpell & operator=(ASpell const &);
		std::string & getName(void) const;
		std::string & getEffects(void) const;
		virtual ASpell *clone(void) const = 0;
		void launch(ATarget const &) const;
		virtual ~ASpell(void);


		
};

#endif
