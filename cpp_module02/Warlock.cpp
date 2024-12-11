/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:22:13 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 12:30:32 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day.\n";
}

std::string const &Warlock::getName(void) const { return(_name); }

std::string const &Warlock::getTitle(void) const { return(_title); }

void Warlock::introduce(void) const 
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";  
}

void Warlock::setTitle(std::string const &title) { _title = title; }


void Warlock::learnSpell(ASpell *spell)
{
	_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &spell)
{
	_spellBook.forgetSpell(spell);
}

void Warlock::launchSpell(std::string const &spell, ATarget const &target)
{
	ASpell *tmp = _spellBook.createSpell(spell);
	tmp->launch(target);
}
Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!\n";
}

