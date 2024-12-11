/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:39:51 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 11:46:45 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type)
{
}

ATarget::ATarget(ATarget const &src)
{
	*this = src;
}

ATarget &ATarget::operator=(ATarget const &src)
{
	if (this != &src)
		_type = src.getType();
	return (*this);
}

std::string const &ATarget::getType(void) const { return (_type); }

void ATarget::getHitBySpell(ASpell const &spell) const 
{
	std::cout << _type << " has been " << spell.getEffects()  << "!\n";
}

ATarget::~ATarget(void)
{
}

