/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:00:12 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 12:47:33 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <map>
# include "ASpell.hpp"

class SpellBook
{
	private:
		SpellBook(SpellBook const &);
		SpellBook &operator=(SpellBook const &);
		std::map<std::string, ASpell *> _arr;
	public:
		SpellBook(void);
		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		ASpell *createSpell(std::string const &);
		~SpellBook(void);
};

#endif

