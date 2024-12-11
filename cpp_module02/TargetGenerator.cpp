/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:59:58 by polmarti          #+#    #+#             */
/*   Updated: 2024/12/11 12:51:21 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	_arr[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	std::map<std::string, ATarget *>::iterator it = _arr.find(target);
	if (it != _arr.end())
	{
		delete it->second;
		_arr.erase(target);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
	std::map<std::string, ATarget *>::iterator it = _arr.find(target);
	if (it != _arr.end())
		return (_arr[target]);
	return (NULL);
}

TargetGenerator::~TargetGenerator(void)
{
	for (std::map<std::string, ATarget *>::iterator it = _arr.begin(); it != _arr.end(); it++)
		delete it->second;
	_arr.clear();
}
