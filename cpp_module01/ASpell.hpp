/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:17:23 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/03 11:57:10 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "Warlock.hpp"
class ATarget;

class ASpell
{
	protected:
		ASpell(void);
		std::string _name;
		std::string _effects;
	public:
		ASpell(std::string, std::string);
		ASpell(ASpell const &);
		ASpell & operator=(ASpell const &);
		std::string const &getName(void) const;
		std::string const &getEffects(void) const;
		virtual ~ASpell(void);
		virtual ASpell * clone(void) const = 0;
		void launch(ATarget const &) const;

};

#endif

