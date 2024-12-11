/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:22:24 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 12:25:04 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ATarget;

class ASpell;

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const &);
		Warlock &operator=(Warlock const &);
		std::string _name;
		std::string _title;
		SpellBook _spellBook;
	public:
		Warlock(std::string name, std::string title);
		std::string const &getName(void) const;
		std::string const &getTitle(void) const;
		void introduce(void) const;
		void setTitle(std::string const &);
		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		void launchSpell(std::string const &, ATarget const &);
		~Warlock(void);
};

#endif 

