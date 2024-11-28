/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:40:00 by polmarti          #+#    #+#             */
/*   Updated: 2024/11/28 11:53:56 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

class Fwoosh : public ASpell
{
	public:
		Fwoosh();
	       	ASpell *clone(void);
		~Fwoosh(void);
};

#endif
