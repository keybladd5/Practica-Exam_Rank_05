/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:11 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:58:07 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh","fwooshed")
{
}

ASpell * Fwoosh::clone(void) const
{
	return (new Fwoosh);
}
Fwoosh::~Fwoosh()
{
}
