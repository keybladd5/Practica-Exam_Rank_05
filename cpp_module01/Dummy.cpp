/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:11 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:57:31 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Dummy")
{
}

ATarget * Dummy::clone(void) const
{
	return (new Dummy);
}
Dummy::~Dummy()
{
}
