/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:11 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:42:50 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{
}

ASpell::ASpell(ASpell const &src)
{
	*this = src
}

ASpell & ASpell::operator=(ASpell const &src) 
{
	if (this != &src)
	{
		_name = src.getName();
		_effects = src.getEffects();
	}
	return (*this);
}

std::string const &ASpell::getName(void) const { return (_name); }

std::string const &ASpell::getEffects(void) const { return (_effects); }

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}

ASpell::~ASpell()
{
}
