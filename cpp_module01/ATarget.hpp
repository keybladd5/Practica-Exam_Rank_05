/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:00 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:43:31 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

class ATarget
{
	private:
		std::string _type;
	public:
		ATarget(std::string);
		ATarget(ATarget const &);
		ATarget & operator=(ATarget const &);
		std::string const &getType(void) const;
		virtual ATarget *clone(void) = 0;
		void getHitBySpell(ASpell const &) const;
		virtual ~ATarget(void);
};

#endif
