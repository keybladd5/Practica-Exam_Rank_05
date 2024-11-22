/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:37:32 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/22 20:16:10 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(void)
{
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{	
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &src)
{
	*this = src;
}

Warlock & Warlock::operator=(Warlock const &src)
{
	if (this != &src)
	{
		_name = src._name;
		_title = src._title;
	}
	return (*this);//retorna la direccion de memoria del propio objeto.
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName(void) const
{
	return (_name);
}

std::string const & Warlock::getTitle(void) const
{
	return (_title);
}

void Warlock::introduce(void) const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::setTitle(std::string const &title)
{
	_title = title;
}
