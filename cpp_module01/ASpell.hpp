/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:00 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:48:10 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

class ASpell
{
	protected:
		std::string _name;
		std::string _effects;
	public:
		ASpell(std::string, std::string);
		ASpell(ASpell const &);
		ASpell & operator=(ASpell const &);
		std::string const &getName(void) const;
		std::string const &getEffects(void) const;
		virtual ASpell *clone(void) = 0;
		void launch(ATarget const &) const;
		virtual ~ASpell(void);
};

#endif
