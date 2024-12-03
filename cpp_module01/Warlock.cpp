/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 09:55:48 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/03 12:52:54 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!\n";
	std::map<std::string, ASpell *>::iterator it_begin = _arr.begin();
	std::map<std::string, ASpell *>::iterator it_end = _arr.end();
	while(it_begin != it_end)
	{
		delete it_begin->second;
		it_begin++;
	}
	_arr.clear();
}

std::string const &Warlock::getName(void) const { return (_name); }

std::string const &Warlock::getTitle(void) const { return (_title); }

void Warlock::setTitle(std::string const &title) { _title= title; }

void Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		_arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string name)
{
	std::map<std::string, ASpell *>::iterator it = _arr.find(name);
	if (it != _arr.end())
		delete it-> second;
	_arr.erase(name);
}

void Warlock::launchSpell(std::string name, ATarget const &target)
{
	ASpell *spell = _arr[name];
	if (spell)
		spell->launch(target);
}

