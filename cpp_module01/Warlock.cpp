/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:13:45 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/27 18:33:39 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day.\n";
}

std::string const & Warlock::getName(void) const { return(_name); }

std::string const & Warlock::getTitle(void) const { return(_title); }

void Warlock::setTitle(std::string const &title) { _title = title; }

void Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!\n";
}

Warlock::~Warlock(void)
{
	std::cout << _name << ": My job here is done!\n";
}
