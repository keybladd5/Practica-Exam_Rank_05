/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:11 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:38:28 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string name) : _type(type)
{
}

ATarget::ATarget(ATarget const &src)
{
	*this = src
}

ATarget & ATarget::operator=(ATarget const &src) 
{
	if (this != &src)
		_type = src.getType();
	return (*this);
}

std::string const &ATarget::getType(void) const { return (_type); }


void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << _type << "has been" << spell.getEffects() << "!\n";
}

ATarget::~ATarget()
{
}
