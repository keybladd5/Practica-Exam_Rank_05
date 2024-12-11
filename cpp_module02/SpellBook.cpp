/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:59:58 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 12:51:41 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
}

void SpellBook::learnSpell(ASpell *spell)
{
	_arr[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spell)
{
	std::map<std::string, ASpell*>::iterator it = _arr.find(spell);
	if (it != _arr.end())
	{
		delete it->second;
		_arr.erase(spell);
	}
}

ASpell *SpellBook::createSpell(std::string const &spell)
{
	std::map<std::string, ASpell *>::iterator it = _arr.find(spell);
	if (it != _arr.end())
		return (_arr[spell]);
	return (NULL);
}

SpellBook::~SpellBook(void)
{
	for (std::map<std::string, ASpell *>::iterator it = _arr.begin(); it != _arr.end(); it++)
		delete it->second;
	_arr.clear();
}
