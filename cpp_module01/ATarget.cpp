/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:09:29 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/27 19:51:04 by polmarti         ###   ########.fr       */
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

ATarget & ATarget::operator=(ATarget const &src)
{
	if (this != &src)
		_type = src.getType();
	return (*this);
}

std::string const & ATarget::getType(void) const { return (_type); }

void ATarget::getHitBySpell(ASpell const &src) const
{
	std::cout << _type << " has been " << src.getEffects() << "!\n";
}
