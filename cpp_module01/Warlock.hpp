/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:54:56 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/03 12:01:26 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const &);
		Warlock &operator=(Warlock const &);
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell *> _arr;	

	public:
		Warlock(std::string name, std::string title);
		~Warlock(void);
		std::string const & getName(void) const;
		std::string const & getTitle(void) const;
		void setTitle(std::string const &);
		void introduce(void) const;
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget const &target);
};

#endif
